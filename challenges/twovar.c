#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, j;


    puts("Enter 2 digits: ");

    scanf("%i %i", &i, &j);

    int test = i%j;

    if (test == 0)
    {
        //testt = TRUE;
        printf("IS DIVISILE PERFECTLY");
    } 

    else if (test != 0)
    {
        //testt = FALSE;
        printf("NOT DIVISILE PERFECTLY");
    }

    else
     printf("ERROR");


    return 0;




}