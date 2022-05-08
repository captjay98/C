#include <stdio.h>

int main(void)
{
    int num, digit;

    puts("Enter a number\n");
    scanf  ("%i", &num);

    do {
        digit = num % 10;

        if (num > 0)
        printf("%i", digit);

        if (num < 0)
        printf("%i", -digit);
        
        num /= 10;
    }
    while (num != 0);


    if (digit < 0)
    puts("-");

    puts("\n");

    return 0;
}