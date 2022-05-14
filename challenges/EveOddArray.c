#include <stdio.h>

int main (void)
{
     int i, Values[100]; 

     for (i = 1; i <= 100; i++)
     {
         Values[i] = i;
     }

     for (i = 1; i <= 100; i++)
     {
         if (Values[i] % 2 == 0)
         printf("[%i] is Even  = %i \n", i, Values[i]);
         else
         printf("[%i] is Odd   = %i \n", i, Values[i]);

     }

     return 0;
}
