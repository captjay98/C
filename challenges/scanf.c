#include <stdio.h>

int main(void)
{
    char s[80], s2[80], s5[80];

    puts("Enter Text");

    scanf("%80s%80s%80s", s, s2, s5);

    printf("\n S = %s \n S2 = %s \n S5 = %s \n",
    s, s2, s5);

    puts("\n");

    return 0;
}