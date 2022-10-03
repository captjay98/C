#include <stdio.h>

int strLen(const char string[]);

int main()
{
    const char word5[] = {"Hello, world! "};
    const char word6[] = {"Hey "};
    const char word7[] = {"woof "};

    printf(" len of %s = %i \n len of %s = %i \n len of %s = %i",
            word5, strLen(word5), word6, strLen(word6), word7, strLen(word7));

}

int strLen(const char string[])
{
    int len = 0;
    while( string[len] != '\0')
    {
        ++len;
    }
    return len;
}

int  stringLength (const char  *string)
{
     const char  *cptr = string;
     while ( *cptr )
        ++cptr;
    return  cptr - string;
}
