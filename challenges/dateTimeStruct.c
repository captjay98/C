#include <stdio.h>
//STRUCTURES OF STRUCTURES

/*
struct dateAndTime  event = { { 2, 1, 2015 }, { 3, 30, 0 } };

struct dateAndTime event =
            { { .month = 2, .day = 1, .year = 2015 },
            { .hour = 3, .minutes = 30, .seconds = 0 }
            };

struct dateAndTime  events[100]
;
events[i].sdate = dateUpdate (events[i].sdate);

events[0].stime.hour    = 12;
events[0].stime.minutes = 0;
events[0].stime.seconds = 0;


*/
struct date
    {
        int  day;
        int  month;
        int  year;
    };

struct time
    {
        int seconds;
        int minutes;
        int hours;
    };

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

struct dateAndTime events;


int main(void)
{
    events.sdate.day = 1;
    events.sdate.month = 2;
    events.sdate.year = 2015;

    events.stime = (struct time) {.hours = 3, .minutes = 30, .seconds = 0 };

    printf(" The event date is %i:%i:%i\n", events.sdate.day,
            events.sdate.month, events.sdate.year);

    printf(" The event time is %i:%i:%i\n", events.stime.hours,
            events.stime.minutes, events.stime.seconds);

    return 0;

}