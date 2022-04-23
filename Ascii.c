#include <stdio.h>

int main(void)
{
	int i = 32;
	int j = 32;

	while (i < 128)
	{
		printf(" Ascii of %d = ", j++);
		putchar(i);
		printf("\n");
		i++;
	}
	putchar(10);

	return (0);
}

