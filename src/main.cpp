#include <iostream>
#include "AlarmClock.h"

struct WakeTime
{
    int hour;
    int minute;
};

int main( int argc, char* argv[] )
{
    WakeTime wakeTime;
    AlarmClock alarmClock;


    std::cout << "What hour do you have to wake up at?" << std::endl;
    std::cin >> wakeTime.hour;
    std::cout << "What minute do you have to wake up at?" << std::endl;
    std::cin >> wakeTime.minute;

    /*
     * TODO: Clean up the data before giving it to the alarm clock class
     */

    std::cout << "So, you have to wake up at: "
              << wakeTime.hour
              << ":" << wakeTime.minute << std::endl;

    alarmClock.SetAlarm( wakeTime.hour, wakeTime.minute );
    return 0;
}

