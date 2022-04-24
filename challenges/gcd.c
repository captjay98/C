#include <stdio.h>

int main(void)
{
    int i, j, gcd;
    puts("Enter 2 Digits");
    scanf("%i%i", &i, &j);

    while (j != 0)
    {
        gcd = i % j;
        i = j;
        j = gcd;
    }

    printf("GCD = %i", i);

    return 0;
}