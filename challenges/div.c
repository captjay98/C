#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double i, j;


    puts("Enter 2 digits: ");

    scanf("%lf %lf", &i, &j);

    double test = i/j;

    if (i == 0 || j == 0)
    {
        puts("0 DIVISION");
    } 
    
    else
    {
        printf("Answer =%.2lf", test);
    }


    return 0;

}