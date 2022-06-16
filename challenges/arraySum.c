#include <stdio.h>

void arraySum(int arr[], int n);

int main()
{
	int i, size;	
	puts("Enter the size of the Array\n");
	scanf("%i", &size);
	int test[size];

	do //(i = 0; i <= size; i++)
	{
		int input;
		puts("Enter next digit to be stored in the array\n");
		scanf("%i", &input);
		
		printf("%i stored at index[%i]\n",input, i);
		test[i] = input;
	i++;
	}while ( i <= size);

	arraySum(test, size);

	return 0;
}


void arraySum(int arr[], int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += arr[i];
		printf("index[%i] = %i\n", i, arr[i]);
	}
	printf("sum = %i", sum);
	

}
