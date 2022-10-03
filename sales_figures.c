#include <stdio.h>
//A program that asks user to enter sales figures for 3 days
//calculate the total sales and average and displays the values

int dayx(int n);
int main()
{
    int NoS1, NoS2, NoS3;
    double average = 0.0;
    int total = 0, day1_total, day2_total, day3_total;


    puts("Enter the number of sales for day 2: \n");
    scanf("%i", &NoS2);
    getchar();
    puts("Enter day 2 Sales: \n");
    day2_total = dayx(NoS2);

    puts("Enter the number of sales for day 3: \n");
    scanf("%i", &NoS3);
    getchar();
    puts("Enter day 3 Sales: \n");
    day3_total = dayx(NoS3);

    total = day1_total + day2_total + day3_total;
    average = total / (NoS1 + NoS2 + NoS3);
    printf("Total sales for the past Three days equals : %i \n", total );
    printf("Average sales for the past Three days equals : %lf \n", average );
    return 0;
}

int dayx(int n)
{
    int day[n], input, total = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &input);
        day[i] = input;
        printf("day 1 sale[%i] = %i\n", i+1, day[i]);
        total += day[i];
    }
    printf("day total = %i\n\n", total);
    return total;
}

int tot(void)
{
    puts("Enter the number of sales for day 1: \n");
    scanf("%i", &NoS1);
    getchar();
    puts("Enter day 1 Sales: \n");
    day1_total = dayx(NoS1);
}
