#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "practice.h"
int farenheit(int z)
	{
		int tempF;
		tempF = z;
		return tempF;
	}

int celcius(int x)
	{
		int tempC;
		tempC = x;
		return tempC;
	}



int main(void)
{
	int temF, temC, temFC, temCF;
	char inpunit, outunit;
	

	printf("Enter Input and Output Unit Please\n");
	scanf("%c %c", &inpunit, &outunit);
	printf("%c %c Selected unit\n",inpunit, outunit);
	inpunit = toupper(inpunit);
	outunit = toupper(outunit);
 

	if (inpunit == 'F' && outunit == 'F')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%d", &temF);
		temF = farenheit(temF);

		if (temF >= 88)
		{
			printf("It is %d in Farenheit\n", temF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temF >= 69)
		{
		    printf("It is %d in Farenheit\n", temF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (temF < 69)
		{
		    printf("It is %d in Farenheit\n", temF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'F' && outunit == 'C')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%d", &temFC);
		temFC = Far2Cel(temFC);

		if (temFC >=30)
		{
		    printf("It is %d degrees in Celcius", temFC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temFC >= 20)
		 {
		    printf("It is %d degrees in Celcius", temFC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (temFC <20)
        {
		    printf("It is %d degrees in Celcius", temFC);
			printf("It is chilly Today, Stay Warm!");
		}

	}

	else if (inpunit == 'C' && outunit == 'C')
	{
		printf("Enter Temperature in Celcius:-");
		scanf("%d", &temC);
		temC = celcius(temC);

        if (temC >=30)
		{
		    printf("It is %d degrees in Celcius\n", temC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temC >= 20)
		 {
		    printf("It is %d degrees in Celcius\n", temC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (temC <20)
        {
		    printf("It is %d degrees in Celcius", temC);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'C'&& outunit == 'F')
	{
		printf("Enter Temperature in celcius:-");
		scanf("%d", &temCF);
		temCF = Cel2Far(temCF);
        
        if (temCF >= 88)
		{
			printf("It is %d in Farenheit\n", temCF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temCF >= 69)
		{
		    printf("It is %d in Farenheit\n", temCF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (temCF < 69)
		{
		    printf("It is %d in Farenheit\n", temCF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit != 'C' || 'F' && outunit != 'C' || 'F')
	{
		printf("Enter a Valid input Please\n");
        
	}

	return (0);
}

	
	


