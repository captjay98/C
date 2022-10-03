#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 =  2;
    
    int *num3 = &num1;
    int *num4 = &num2;

    *num4 = 60;

    printf("Value of Num 1 = %i \n", num1);
    printf("Address of Num 1 = %p \n\n", &num1);

    printf("Value of Num 2 = %i \n", num2);
    printf("Address of Num 2 = %p \n\n", &num2);

    printf("Value of Num 3 = %i \n", *num3);
    printf("Address of Num 3 = %p \n\n", num3);

    printf("Value of Num 4 = %i \n", *num4);
    printf("Address of Num 4 = %p \n", num4);

    return 0;
}