#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int intarr[8];
	int indexNum = 0;
	int numEntered = 0;
	int totalEntered = 0;

	char input[16];

	for (indexNum = 0; indexNum < 6; indexNum++)
	{
		puts("Enter Number :-");
		fgets(input, 16, stdin);

	
		if (strncmp(input, "q", 1) == 0)
		{
			break;
		}

		numEntered = atoi(input);

		intarr[indexNum] = numEntered;

		numEntered += intarr[indexNum];
		totalEntered++;
	}

	for(indexNum = 1; indexNum < totalEntered; indexNum++)
	{
		printf("Num at index[%i] = %i\n", indexNum, intarr[indexNum]);
	}

	printf("Total = %i", totalEntered);

	return 0;
}
