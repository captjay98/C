#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int password ;
	char characters;
	int i;

	puts("Here is your password");
	
	srand(time(NULL));
	
	for (i = 0; i <= 20; i++)
	{

	characters = rand() % 10;
	password += characters;

	printf("%c", password);
	}
	

	return (0);

}
/*int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
*/