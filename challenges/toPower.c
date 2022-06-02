#include <stdio.h>

long int x_to_the_n(long int n, int p);

int main()
{
	long int num, pow;

	puts("Enter Number and Power");
	scanf("%li%li", &num,&pow);

	long int x = x_to_the_n(num,pow);
	printf("%li", x);
	
	return 0;

}

long int x_to_the_n(long int n, int p)
{
	long int result ;

	if(p != 0)
	{
		result = (n * x_to_the_n(n , p - 1));
	}
	else
	{
		result = 1;
	}
	return result;
}


