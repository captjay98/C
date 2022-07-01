#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

/*
static struct time runTime[5] = { [1].hour = 12, [1].minutes =
30 };

struct time runTime[5] = { [2] = {12, 0, 0} };

struct time  runTime[5] = { 12, 0, 0, 12, 30, 0, 13, 15, 0 };
*/

struct time timeUpdate(struct time now);

int main(void)
{
    struct time testTimes[6] = 
    {   {00, 00, 00,}, { 11, 59, 59 }, { 12, 0, 0 }, 
        { 1, 29, 59 }, { 23, 59, 59 }, { 19, 12, 27}
    };
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Time is %.2i:%.2i:%.2i ", testTimes[i].hour,
        testTimes[i].minutes, testTimes[i].seconds);

        testTimes[i] = timeUpdate(testTimes[i]);

        printf(".....One Second Later time is %.2i:%.2i:%.2i\n", testTimes[i].hour,
        testTimes[i].minutes, testTimes[i].seconds);
    }


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
            now.minutes = 0;
            ++now.hour;

            if (now.hour == 24)
            {
                now.hour - 0;
            }
        }
    }
    return now;
}
