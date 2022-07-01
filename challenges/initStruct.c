


struct date  today = { 7, 2, 2015 };
struct time  this_time = { 3, 29, 55 };
struct time  time1 = { 12, 10 };
struct time time1 = { .hour = 12, .minutes = 10 };
struct date today = { .year = 2015 };
today = (struct date) { 9, 25, 2015 };
today = (struct date) { .month = 9, .day = 25, .year = 2015 };
nextDay =  dateUpdate ((struct date) { 5, 11, 2004} );
struct  date
{
    int  month;
    int  day;
    int  year;
} todaysDate = { 1, 11, 2005 };
struct
{
    int  month;
    int  day;
    int  year;
}  dates[100];
