#include <stdio.h>

//Multiplies Array by 2

void multiplyBy2(float array[], int n);

int main()
{

    float floatVals[5] = {5.2f, 45.45f, 23.76f, 500.00f, 2.25f};
    int i;
    
    multiplyBy2(floatVals, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%.2f  ", floatVals[i]);
    }
    puts("\n");

    return 0;

}

void multiplyBy2(float array[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        array[i] *= 2;
    }
}
