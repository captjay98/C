#include <stdio.h>

int main()
{
      int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      int i, j;

      for (j = 0; j < 10; ++j)
	{

	      for ( i = 0; i < j; i++)
		{
  printf("numbers[%i] + numbers[%i] = %i\n", numbers[j], numbers[i], numbers[j]);

	  numbers[j] = numbers[j] + numbers[i];
		}
	}

      for ( j = 0; j < 10; j++)
	{
	      printf("%i ", numbers[j]);
	}
	
      puts("\n");

      return 0;

}
