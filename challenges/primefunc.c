#include <stdio.h>
#include <stdbool.h>
int prime(int num)
{
     	int   p;
     	bool  isPrime;


     for ( p = 2;  p <= 500000;  ++p )
     {
         isPrime = true;

		 if ( num % p  ==  0 )
		 {
                	  return 0;
		 }
              
		 if ( isPrime != false )
		 {
			 return 1;
		 }
     }
}

int main()
{	
	int x;
	puts("Enter Number");
	scanf("%i", &x);
	printf("%i",prime(x));		
	return 0;
}

