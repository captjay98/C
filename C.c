#include <stdio.h>
#include <math.h>


int main(){

    char unit;
    float temp;
    printf("Enter Unit: \n");
    scanf("%c". &unit);

    unit = toupper(unit);

    if (unit =='C'){
        printf("The temperature is currently in Celcius\n");
    }
    else if (unit =='F'){
        printf("The temperature is currently in Farenheit\n");
        
    }








 
    return 0;


  
}