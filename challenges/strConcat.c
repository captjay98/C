#include <stdio.h>


void concat(char result[], const char str1[], int n1,
        const char str2[], int n2, const char str5[], int n5);

int main(void)
{
    const char s1[] = {"Jamal "};
    const char s2[] = {"Ibrahim "};
    const char s5[] = {"Umar "};
    char s3[19];

    concat(s3, s1, 6, s2, 8, s5, 5);

    for (int i = 0; i < 19; i++)
    {
        printf("%c", s3[i]);
    }
    puts("\n");

    return 0;
}

void concat(char result[], const char str1[], int n1,
        const char str2[], int n2, const char str5[], int n5)
{

    int i, j, k;

    for ( i = 0; i < n1; ++i )
    {
        result[i] = str1[i];
    }

    for ( j = 0; j < n2; ++j )
    {
        result[n1 + j] = str2[j];
    }

    for ( k = 0; k < n5; ++k )
    {
        result[n1 + n2 + k] = str5[k];
    }
    
}

