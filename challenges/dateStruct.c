#include <stdio.h>
#include <stdbool.h>

struct  date
    {
        int  day;
        int  month;
        int  year;
    };

struct date tomorrow;
struct date thisDay, nextDay;

int numberOfDays(struct date d);
bool isLeapYear(struct date d);
struct date dateUpdate(struct date today);


int main()
{
    puts("Enter today's date in Day Month Year Format ");
    scanf("%i%i%i", &thisDay.day, &thisDay.month, &thisDay.year);
    
    nextDay = dateUpdate(thisDay);

    printf ("Tomorrow's date is %i-%i-%.2i.\n", nextDay.day, nextDay.month, nextDay.year);

    return 0;
}

struct date dateUpdate(struct date today)
{
    

     if  ( today.day != numberOfDays(today) ) {
         tomorrow.day = today.day + 1;
         tomorrow.month = today.month;
         tomorrow.year = today.year;
     }
     else if ( today.month == 12 ) {    // end of year
         tomorrow.day = 1;
         tomorrow.month = 1;
         tomorrow.year = today.year + 1;
     }
     else {                             // end of month
         tomorrow.day = 1;
         tomorrow.month = today.month + 1;
         tomorrow.year = today.year;
     }

    return tomorrow;
}

int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[13] = 
     { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     if (isLeapYear(d) == true && d.month == 2)
        days = 29;
     else
        days = daysPerMonth[d.month];

    return days;
}

bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if( (d.year %4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0 ))
    {
        leapYearFlag = true;
    }
    else{
        leapYearFlag = false;
    }

    return leapYearFlag;
}



    /*today.day = 9;
    today.month = 12;
    today.year = 1998;

    printf("My date of birth is %i-%i-%i\n", today.day, today.month, today.year);
   */