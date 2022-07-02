#include <stdio.h>
#include <stdbool.h>

bool strComp(const char s[], const char s1[]);

int main()
{
    const char stra[] = "abcdefghijklmnopqrstuv";
    const char strb[] = "abcdef";

    printf("%i\n", strComp(stra, strb));
    printf("%i\n", strComp(stra, stra));
    printf("%i\n", strComp(stra, "abcdef"));
    printf("%i\n", strComp(strb, "abcdef"));

    puts("\n");

    return 0;

}

bool strComp(const char s[], const char s1[])
{
    int i = 0;
    bool areEqual;

    while (s[i] == s1[i] && s[i] != '\0' && s1[i] != '\0')
    {
        i++;
    }
    if (s[i] == s1[i])
        areEqual = true;

    else
        areEqual = false;

    return areEqual;
    
}

