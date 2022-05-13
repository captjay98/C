#include <stdio.h>

int main (void)
{
     int Num, i;
     unsigned long long int Fib, Fib1 = 0, Fib2 = 1;

     puts("Enter Number of Fibs you want to find");
     scanf("%i", &Num);

     printf("Fib 1 = %llu\nFib 2 = %llu\n", Fib1, Fib2);

     for ( i = 2;  i <=Num;  ++i )
     {	
      	  Fib = Fib1 + Fib2;
          printf ("Fib %i  = %llu\n",i+1, Fib);

	  Fib1 = Fib2;

	  Fib2 = Fib;
     }

     return 0;
}
