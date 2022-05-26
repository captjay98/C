#include <stdio.h>

int main(void)

{
	int i;
	for(i=10; i>=0; i--)
	{
		printf("%d \n", i);

	}
	printf("\n>>Blast OFF<<\n");


	int cnt = 10;

	while (cnt >= 0) 
	{
		printf("%d \n", cnt);

		cnt --;
	}
	printf("\nBlastoff Again\n");


	int count = 10;
	do 
	{
		printf("%d \n", count--);
	
	} while (count >= 0);

	printf("This is the End");
	return (0);

}
