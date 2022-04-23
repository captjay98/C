#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "practice.h"
int farenheit(int z)
	{
		return z;
	}

int celcius(int x)
	{
		return x;
	}



int main(void)
{
	int tempF, tempC, tempFC, tempCF;
	char inpunit, outunit;
	

	puts("Enter Input and Output Unit Please\n");
	scanf("%c %c", &inpunit, &outunit);
	printf("%c %c Selected unit\n",inpunit, outunit);
	inpunit = toupper(inpunit);
	outunit = toupper(outunit);
 

	if (inpunit == 'F' && outunit == 'F')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%d", &tempF);
		tempF = farenheit(tempF);

		if (tempF >= 88)
		{
			printf("It is %d in Farenheit\n", tempF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (tempF >= 69)
		{
		    printf("It is %d in Farenheit\n", tempF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (tempF < 69)
		{
		    printf("It is %d in Farenheit\n", tempF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'F' && outunit == 'C')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%d", &tempFC);
		tempFC = Far2Cel(tempFC);

		if (tempFC >=30)
		{
		    printf("It is %d degrees in Celcius", tempFC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (tempFC >= 20)
		 {
		    printf("It is %d degrees in Celcius", tempFC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (tempFC <20)
        {
		    printf("It is %d degrees in Celcius", tempFC);
			printf("It is chilly Today, Stay Warm!");
		}

	}

	else if (inpunit == 'C' && outunit == 'C')
	{
		printf("Enter Temperature in Celcius:-");
		scanf("%d", &tempC);
		tempC = celcius(tempC);

        if (tempC >=30)
		{
		    printf("It is %d degrees in Celcius\n", tempC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (tempC >= 20)
		 {
		    printf("It is %d degrees in Celcius\n", tempC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (tempC <20)
        {
		    printf("It is %d degrees in Celcius", tempC);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'C'&& outunit == 'F')
	{
		printf("Enter Temperature in celcius:-");
		scanf("%d", &tempCF);
		tempCF = Cel2Far(tempCF);
        
        if (tempCF >= 88)
		{
			printf("It is %d in Farenheit\n", tempCF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (tempCF >= 69)
		{
		    printf("It is %d in Farenheit\n", tempCF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (tempCF < 69)
		{
		    printf("It is %d in Farenheit\n", tempCF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit != 'C' || 'F' && outunit != 'C' || 'F')
	{
		printf("Enter a Valid input Please\n");
        
	}

	return (0);
}

	
	


