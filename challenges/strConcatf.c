#include <stdio.h>

void concat(char result[], const char str1[],
        const char str2[], const char str5[]);

int main(void)
{
    const char s1[] = "Jamal ";
    const char s2[] = "Ibrahim ";
    const char s5[] = "Umar ";
    char s3[19];

    concat(s3, s1, s2, s5);

    printf("%s", s3);

    return 0;
}

void concat(char result[], const char str1[],
        const char str2[], const char str5[])
{

    int i, j, k;

    for ( i = 0; str1[i] != '\0'; ++i )
    {
        result[i] = str1[i];
    }

    for ( j = 0;  str2[j] != '\0'; ++j )
    {
        result[i + j] = str2[j];
    }

    for ( k = 0;  str5[k] != '\0'; ++k )
    {
        result[i + j + k] = str5[k];
    }

    result [i + j + k] = '\0';
    
}

