#include <iostream>
#include "timer.h"

using namespace std;

Timer::Timer(int hours, int minutes, int seconds){
    if(!timeInRange(hours, 24) && !timeInRange(minutes) && !timeInRange(seconds))
        exit(0);
    all_seconds = seconds + (minutes * 60) + (hours * 3600);
}

int Timer::getSeconds() const{
    return all_seconds % 60;
}

int Timer::getMinutes() const {
    return (all_seconds % 3600) / 60;
}

int Timer::getHours() const {
    return (timeInRange((all_seconds / 3600), 24) ? (all_seconds / 3600) : 24);
}

void Timer::set(int hours, int minutes, int seconds){
    if(!timeInRange(hours, 24))
        hours = 24;
    if(!timeInRange(minutes, 60))
        minutes = 60;
    if(!timeInRange(seconds, 60))
        seconds = 60;
    all_seconds = seconds + (minutes * 60) + (hours * 3600);
}

istream& operator>>(istream& in, Timer& tt){
    char* timeString;
    in >> timeString;
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    tt.set(hours, minutes, seconds);
    return in;
}

ostream& operator<<(ostream& out, const Timer& tt){
    out<<tt.getHours()<<":"<<tt.getMinutes()<<":"<<tt.getSeconds()<<endl;
    return out;
}

int main(){
    Timer obj = Timer(8, 9, 10);
    cout<<"Here"<<endl;
    cout<<obj;
    cin>>obj;
    cout<<obj;
    return 0;
}