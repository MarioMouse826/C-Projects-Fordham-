#include<iostream>
#include"timer.h"

using namespace std;


// Constructor 
Timer::Timer(int hours, int minutes, int seconds){
    if(!Timer::timeInRange(hours, 24) || !Timer::timeInRange(minutes) || !Timer::timeInRange(seconds)){
        exit(0);
    }
    all_seconds = (hours * 3600) + (minutes * 60) + seconds;
}

int Timer::getSeconds() const{
    int valid_seconds = Timer::timeInRange(all_seconds) ? all_seconds : 60;
    return valid_seconds; 
}

int Timer::getMinutes() const{
    int all_minutes = (all_seconds/60);
    int valid_minutes = Timer::timeInRange(all_minutes) ? all_minutes : all_minutes - 60;
    return valid_minutes;
}

int Timer::getHours() const{
    int all_hours = (all_seconds*3600);
    int valid_hours = Timer::timeInRange(all_hours, 24) ? all_hours : all_hours - 24;
    return valid_hours;
}

void Timer::set(int hours, int minutes, int seconds){

    if(!Timer::timeInRange(hours, 24) || !Timer::timeInRange(minutes) || !Timer::timeInRange(seconds)){
        exit(0);
    }
    all_seconds = (hours * 3600) + (minutes * 60) + seconds;
    
}

istream& operator>>(istream& in, Timer& tt){
    string inputTime ;
    in>>inputTime; // String  - HH:MM:SS

    int hours = 0, minutes = 0, seconds = 0;

    // Add a logic to get hours, minut and seconds from the inutTime
    // ToDo

    tt.set(10, 30, 20);

    return in;
}

ostream& operator<<(ostream& out, const Timer& tt){
    out<<tt.getHours()<<":"<<tt.getMinutes()<<":"<<tt.getSeconds()<<endl;
    return out;
}


int main(){
    Timer obj = Timer(1, 30, 10);
    cout<<obj<<endl;
    cout<<"Testing";
    cin>>obj;
    cout<<obj;
    return 1;
}