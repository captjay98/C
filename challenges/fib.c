#include <stdio.h>

int main (void)
{
     int  Fib[15], i;

     Fib[0] = 0;    // by definition
     Fib[1] = 1;    // ditto

     for ( i = 2;  i < 15;  ++i )
     {
          Fib[i] = Fib[i-2] + Fib[i-1];
     }

     for ( i = 0;  i < 15;  ++i )
     {
          printf ("Fib[%i] = %i\n",i+1, Fib[i]);
     }

     return 0;
}