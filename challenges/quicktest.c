#include <stdio.h>

int main(void)
{
    int rate[6];
    int sum = 0;
    int i, total;
    //rate[0] = 100;
    //rate[1] = 50;
    //rate[2] = 50;
    //rate[3] = 50;
    ///rate[4] = 50;

    

    for (i = 0; i < 100; i++)
    {
        rate[i] = 0;
    }

    puts("Enter Rate: ");

    for (i = 1; i < 6; i++)
    {
        scanf("%i", &total);

        rate[i] = total;

        sum += rate[i];

        printf("Index[%i] = %i\n",i, rate[i]);

    }

    printf("sum = %i\n", sum);

    
    return 0;
}