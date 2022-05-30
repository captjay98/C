#include <stdio.h>



    int base, index = 0, convertedNumber[64];
    long int numberToConvert;


void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);


int main(void)
{
    
    getNumberAndBase();

    convertNumber();

    displayConvertedNumber();

    return 0;
}


void getNumberAndBase(void)
{
    puts("Number to be Converted: ");
    scanf("%ld", &numberToConvert);
    

    puts("Base?");
    scanf("%i", &base);

    do {
        if (base <= 2 || base > 16 )
        {
            puts("Out of range");
            base = 10;
            break;
        }
    } while ((base < 2 ) || (base > 16));
}


void convertNumber(void)
{
    do
    {
        convertedNumber[index] = numberToConvert % base;

        printf("\n%ld divided by %i = %ld remainder %i \n", numberToConvert, base, numberToConvert/base, convertedNumber[index]);
        
        ++index;
        numberToConvert /= base;

    } while (numberToConvert != 0); 
}

void displayConvertedNumber(void)
{ 
    const char baseDigits[16] = {
             '0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
             
    int nextDigit;

    if (base <= 1 || base > 16 )
        {
            puts("Out of range");
        }
    
    else
    {
    puts ("\nConverted Number =");

    for (--index; index >= 0; --index)
    {
        nextDigit = convertedNumber[index];
        printf ("%c", baseDigits[nextDigit]);
    }

    puts("\n");
    }

}
