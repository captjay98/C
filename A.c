#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

double farenheit(double z)
	{
		double tempF;
		tempF = z;
		return tempF;
	}

double celcius(double x)
	{
		double tempC;
		tempC = x;
		return tempC;
	}

double Far2Cel(double c)
	{
		double tempFC;
		tempFC = ((c - 32.0) * 5.0 / 9.0);
		return tempFC;
	}

double Cel2Far(double v)
	{
		double tempCF;
		tempCF = (v * 9 / 5) + 32;
		return tempCF;
	}



int main(void)
{
	double temF, temC, temFC, temCF;
	char inpunit, outunit;
	

	printf("Enter Input and Output Unit Please\n");
	scanf("%c %c", &inpunit, &outunit);
	printf("%c %c Selected unit\n",inpunit, outunit);
	inpunit = toupper(inpunit);
	outunit = toupper(outunit);
 

	if (inpunit == 'F' && outunit == 'F')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%lf", &temF);
		temF = farenheit(temF);

		if (temF >= 88)
		{
			printf("It is %lf in Farenheit\n", temF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temF >= 69)
		{
		    printf("It is %lf in Farenheit\n", temF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (temF < 69)
		{
		    printf("It is %lf in Farenheit\n", temF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'F' && outunit == 'C')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%lf", &temFC);
		temFC = Far2Cel(temFC);

		if (temFC >=30)
		{
		    printf("It is %lf degrees in Celcius", temFC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temFC >= 20)
		 {
		    printf("It is %lf degrees in Celcius", temFC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (temFC <20)
        {
		    printf("It is %lf degrees in Celcius", temFC);
			printf("It is chilly Today, Stay Warm!");
		}

	}

	else if (inpunit == 'C' && outunit == 'C')
	{
		printf("Enter Temperature in Celcius:-");
		scanf("%lf", &temC);
		temC = celcius(temC);

        if (temC >=30)
		{
		    printf("It is %lf degrees in Celcius\n", temC);
			printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temC >= 20)
		 {
		    printf("It is %lf degrees in Celcius\n", temC);
			printf("It's a Nice Day, Enjoy!");
		 }
		else if (temC <20)
        {
		    printf("It is %lf degrees in Celcius", temC);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit == 'C'&& outunit == 'F')
	{
		printf("Enter Temperature in celcius:-");
		scanf("%lf", &temCF);
		temCF = Cel2Far(temCF);
        
        if (temCF >= 88)
		{
			printf("It is %lf in Farenheit\n", temCF);
		    printf("It's a Hot Day, Stay Hydrated");
		}
		else if (temCF >= 69)
		{
		    printf("It is %lf in Farenheit\n", temCF);
			printf("It's a Nice Day, Enjoy!");
		}
		else if (temCF < 69)
		{
		    printf("It is %lf in Farenheit\n", temCF);
			printf("It is chilly Today, Stay Warm!");
		}
	}

	else if (inpunit != 'C' || 'F' && outunit != 'C' || 'F')
	{
		printf("Enter a Valid input Please\n");
        
	}

	return (0);
}

	
	


