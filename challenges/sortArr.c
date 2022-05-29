#include <stdio.h>

//Sorts Arry in Ascending order and Descending Order

void sortArryAsc(int a[], int n);
void sortArryDesc(int a[], int n);


int main(void)
{    
    int i;
    int arr[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };



    puts("Before Sorting:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i  ", arr[i]);
    }
    puts("\n");



    sortArryAsc(arr, 16);

    puts("After Sorting in Ascending order:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i  ", arr[i]);
    }

    puts("\n");



    sortArryDesc(arr, 16);

    puts("After Sorting in Descending order:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i  ", arr[i]);
    }
    puts("\n");



   

}

void sortArryAsc(int a[], int n)
{ 
    int i, j, temp; 

    for (i = 0; i < n - 1; i++)
    { 
        for (j = i + 1; j < n; j++)
        { 
            if (a[i] > a[j])
            { 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}




void sortArryDesc(int a[], int n)
{ 
    int i, j, temp; 

    for (i = 0; i < n; i++)
    { 
        for (j = 0; j < n; j++)
        { 
            if (a[i] > a[j])
            { 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

