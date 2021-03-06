#include <stdio.h>

struct time
    {
        int seconds;
        int minutes;
        int hours;
    };
struct time currentTime, nextTime;

struct time timeUpdate(struct time now);

int main()
{
    puts("Enter the time in (minutes:hours:seconds)");
    scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("Current Time is %.2i:%.2i:%.2i", nextTime.hours, nextTime.minutes, nextTime.seconds);

    return 0;
}


struct time timeUpdate(struct time now)
{
    ++now.seconds;

    if (now.seconds == 60)
    {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60)
        {
            now.minutes =  0;
            ++now.hours;

            if (now.hours == 24)
            {
                now.hours = 0;
            }
        }
    }
    return now;
}