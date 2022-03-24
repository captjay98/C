#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int tempF, tempC, tempFC, tempCF;
	char inpunit, outunit;
	

	printf("Enter Input and Output Unit Please\n");
	scanf("%c %c", &inpunit, &outunit);
	printf("%c %c Selected unit\n",inpunit, outunit);
	inpunit = toupper(inpunit);
	outunit = toupper(outunit);
 
	
	
	int farenheit(int tempF)
	{
		return tempF;
	}

	int celcius(int tempC){
		tempC = tempC;
		return tempC;
	}

	int Far2Cel(int tempFC)
	{
		tempFC = ((tempFC - 32.0) * 5.0 / 9.0);
		return tempFC;
	}

	int Cel2Far(int tempCF)
	{
		tempCF = (tempCF * 9 / 5) + 32;
	}

	if (inpunit == 'F' && outunit == 'F')
	{
		printf("Enter Temperature in Farenheit:-");
		scanf("%d", &tempF);

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



 /*if (inpunit =='C'){
        printf("Enter the Temperature in Celsius\n");
        scanf("%d", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is:%.1f", temp);
    }
    else if (inpunit =='F'){
        printf("Enter the Temperature in Farenheit\n");
        scanf("%d", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celcius is: %.1f", temp);
    }

 
	if (inpunit =='C')
	{
		printf("Enter the Temperature in Celsius\n");
        
		temp = (temp * 9 / 5) + 32;
        
		printf("\nThe temp in Farenheit is:%.1f", temp);
	}

    
	else if (inpunit =='F'){
        
		printf("Enter the Temperature in Farenheit\n");
        
		temp = ((temp - 32) * 5) / 9;
        
		printf("\nThe temp in Celcius is: %.1f", temp);
	}
*/
	return (0);
}
