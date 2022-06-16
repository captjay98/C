#include <stdio.h>
#include <ctype.h>

//Sorts Array in Ascending or Descending Order

void sortArryAsc(int a[], int n, char option);


int main(void)
{    
    char op;
    int i;
    int arr[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };



    puts("Before Sorting:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i  ", arr[i]);
    }
    puts("\n");

    puts("Enter A for Ascending & D for ascending order");
    
    scanf("%c", &op);
    op = toupper(op);


    sortArryAsc(arr, 16, op);

    puts("After Sorting in Ascending order:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i  ", arr[i]);
    }

    puts("\n");

}

void sortArryAsc(int a[], int n, char option)
{ 
    int i, j, temp; 

    if (option == 'A')
    {
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

    else if (option == 'D')
    {
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

    else if  ((option != 1) || (option != 2))
    {
        puts("Don't be Stupid");
    }
}
