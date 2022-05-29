#include <stdio.h>

int minNum(int vals[], int elements);

int main()
{
    int arr[8] = {0, 1, 2, -3, 4, -5, 6, 7};
    int x = minNum(arr, 8);

    printf("Array Minimum = %i\n", x);

    return 0;
}

int minNum(int vals[], int elements)
{
    int minVal, i;

    minVal = vals[0];

    for (i = 1; i < elements; i++)
    {
        if (vals[i] < minVal)
        {
            minVal = vals[i];
        }
    }
    return minVal;
}