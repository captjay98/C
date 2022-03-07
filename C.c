#include <stdio.h>
#include <ctype.h>


int main(){

    char unit;
    float temp;
    printf("Enter Unit: \n");
    scanf("%c", &unit);

    unit = toupper(unit);
 
    if (unit =='C'){
        printf("Enter the Temperature in Celsius\n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is:%.1f", temp);
    }
    else if (unit =='F'){
        printf("Enter the Temperature in Farenheit\n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celcius is: %.1f", temp);
    }
    else{
        printf(" %c is incorrect,Enter an Appropiate Unit please.", unit);
    }


 
    return 0;


  
}
