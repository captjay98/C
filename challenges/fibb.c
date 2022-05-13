#include <stdio.h>

int main (void)
{
     int Fib, Fib1 = 1, Fib2 = 2, i;

     for ( i = 0;  i < 15;  ++i )
     {	
      	  Fib = Fib1 + Fib2;
          printf ("Fib  = %i\n", Fib);
	  ++Fib1;
	  ++Fib2;
     }

     return 0;
}
