#include <stdio.h>

void swapping(int *digOne, int *digTwo)
{
    int temp = *digOne;
    *digOne = *digTwo;
    *digTwo = temp;
}


int main()
{
    int num1 = 5;
    int num2 = 6;

    printf(" num1 = %i \n num2 = %i \n", num1, num2);

    swapping(&num1, &num2);

    printf(" num1 = %i \n num2 = %i \n", num1, num2);

    return 0;

}
