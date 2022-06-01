#include <stdio.h>
#include <stdbool.h>

unsigned long int factorial(unsigned int n);
int main()
{

	unsigned int j;
	
	for (j = 0; j < 11; j++)
		printf("%2u! = %lu\n", j, factorial(j));

}


unsigned long int factorial(unsigned int n)
{

	unsigned long int result;

	if( n == 0)
		result = 1;

	else
	    result = n * factorial (n - 1);

	return result;

}
