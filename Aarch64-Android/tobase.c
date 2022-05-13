#include <stdio.h>

int main(void)
{
    const char baseDigits[16] = {
             '0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;


    puts("Number to be Converted: ");
    scanf("%ld", &numberToConvert);
    

    puts("Base?");
    scanf("%i", &base);


    do {

        if (base <= 1 || base > 16 )
        {
            puts("Out of range");
            break;
        }

        else
        {
        convertedNumber[index] = numberToConvert % base;

        printf("\n%ld divided by %i = %ld remainder %i \n", numberToConvert, base, numberToConvert/base, convertedNumber[index]);
        
        ++index;
        numberToConvert /= base;
        }

    } while (numberToConvert != 0);


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

    return 0;

}