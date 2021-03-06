// Generate Fibonacci numbers using variable length arrays
#include <stdio.h>
int main (void)
{
     int i, numFibs;

     puts("How many Fibonacci numbers do you want (between 1 and 500)? ");
     scanf("%i", &numFibs);

     if (numFibs < 1 || numFibs > 500)
      {
          printf ("Out of Range, sorry!\n");
          return 1;
      }

     unsigned long long int Fibonacci[numFibs];

     Fibonacci[0] = 0;          // by definition
     Fibonacci[1] = 1;  

     for ( i = 2;  i < numFibs;  ++i )
     {
          Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
     }

     for ( i = 0;  i < numFibs;  ++i )
     {
          printf ("%llu  ", Fibonacci[i]);
     }

     puts("\n");

     return 0;
}