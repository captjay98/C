#include <stdio.h>
//A program that asks user to enter sales figures for 3 days
//calculate the total sales and avaerage and displays the values

int day1(int n);
int main()
{
    puts("Enter the number of sales for day 1: ");
    day1(2);
    //ask user for sales figures for day1, day2 and day3
    //store them in an array
    /*int input;
    int day1[], day2[], day3[];
    int total, day1_total, day2_total, day3_total;
    double average;
    char inter;

    //puts("Enter sales figures for day2");

    //puts("Enter sales figures for day3");

    //loop through array of sales figures

    puts("Enter sales figures for day1, press q when done\n");

    for (int i = 0; i < 100; i++)
    {
        scanf("%i", &input);
        if (input == 'q')
        {
            break;
        }
        day1[i] = input;
    }
    //calculate the total sales
    //calculate the total avaerage*/
    return 0;
}

void day1(int n)
{
    int day[n], input, total = 0;
    for (int i = 0; i < n; i++)
    {
        day[i] = 0;
    }
    puts("Enter sales figures for day2");
    {
        scanf("%i", &input);
        if (input == 'q')
        {
            break;
        }
        day[i] = input;
        total += day[i];
    }
}
