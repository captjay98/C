#include <stdio.h>

int main(void)
{
    int i ;

    double num, average, values[10];


    for (i = 0; i < 10; i++)
    {
        values[i] = 0;
    }

    
    for (i = 0; i < 10; i++)

    {
        printf("Enter Values [%i]\n", i + 1);
        scanf("%lf", &num);

        values[i] = num;
        num += values[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("Value[%i] = %.2lf \n", i + 1, values[i]);
    }

    average = num / 10;

    printf("AVERAGE = %.2lf", average);



    return 0;
}