#include <iostream>

#ifndef TIMER_H
#define TIMER_H
using namespace std;

class Timer
{
   friend istream& operator>>(istream& in, Timer& tt);
   // Reads a Timer object that is formatted as HH:MM:SS

   friend ostream& operator<<(ostream& out, const Timer& tt);
   // Writes a Timer object formatted as HH:MM:SS.

   public: 
     Timer(int hours=0, int minutes=0, int seconds=0);
      // Create a Timer 
      
     int getHours() const;
     // Returns the number of hours in the Timer

     int getMinutes() const;
     // Returns the number of minutes in the Timer

     int getSeconds() const;
     // Returns the number of seconds in the Timer

     void set(int hours, int minutes, int seconds);
     // Sets the timer to the new time.

   private:
    int all_seconds;
    // Utility function that can't be seen anywhere else!
    static bool timeInRange(int time, int upper = 60)
    {
        return time >= 0 && time <= upper;
    }
};
#endif // TIMER_H

