#include <stdio.h>

int main (void)
{
     int i, Values[100]; 

     for (i = 1; i <= 100; i++)
     {
         Values[i] = 0;
     }

     for (i = 1; i <= 100; i++)
     {
         if (i % 2 != 0)
         Values[i] = i;

         else if (i % 2 == 0)
         Values[i] = i;

        
     }

     for (i = 1; i <= 100; i++)
     {
         if (Values[i] % 2 == 0)
         printf("is Eve [%i] = %i \n", i, Values[i]);
         else
         printf("is Odd [%i] = %i \n", i, Values[i]);

     }

     return 0;
}
