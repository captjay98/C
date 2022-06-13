#include <stdio.h>
#include <string.h>

int main()
{
	puts("program start\n");

	char userinput[70];


	while(fgets(userinput, 70, stdin ))
	{
		printf("User Input: %s\n", userinput);

		if (strncmp(userinput, "quit", 4) == 0)
		{
			puts("Breaking\n");
			break;
		}
	}

	puts("The End");

	return 0;
}
