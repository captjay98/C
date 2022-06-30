#include <stdio.h>
#include <stdbool.h>

struct date
    {
         int day;
         int month;
         int year;
    };

struct date current;
struct date age;
struct date dOb;

int main()
{
  
    current = (struct date) { 20, 6, 2022};
    
    /*current.day =  20;
    current.month = 6;
    current.year = 2022;*/
    puts("\nEnter DoB in dd-mm-yyyy format\n");
    getchar();

    scanf("%i-%i-%i", &dOb.day, &dOb.month, &dOb.year);

    printf("%2i-%.2i-%.2i\n", dOb.day, dOb.month, dOb.year);



    age = (struct date) {dOb.day - current.day, dOb.month - current.month, current.year - dOb.year - 1};

    printf(" Your are %2i Years %.2i Months and  %.2i days old\n",
            age.year, age.month, age.day);
    return 0;

}