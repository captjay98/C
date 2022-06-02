#include <stdio.h>

int calculateTriangularNumber (int n);

int main (void)
{
	int count, tri, x; 
	for (count = 1; count <= 5; count++)
	{
		puts("What Triangular Number do you want?");
		scanf("%i", &tri);

		x = calculateTriangularNumber(tri);

		printf ("Triangular number %i is %i\n", tri, x);
	}
}


int calculateTriangularNumber (int n)
{
      int  i, triangularNumber = 0;
      for ( i = 1;  i <= n;  ++i )
        {
	      triangularNumber += i;
	}
      return triangularNumber;
}
