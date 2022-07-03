#include <stdio.h>


int main(void)
{
    char  letters[] = { "abcdefghijklmnopqrstuvwxyz\
ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

    char  letterss[] ={ "abcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

    char x = '\'';
    char a, b, c;

    printf("\a This is Audible Sound\n");//Audible Sound

    printf(" a b c\b\b\b\n");//Backspace Character

    printf("%i\t%i\t%i\n", a, b, c); //Tab character

    printf("\"double quotes\"\n");

    printf ("\\t is the horizontal tab character.\n");

    printf ("Programming in C is fun\n");
    printf ("Programming"  " in C is fun\n");
    printf ("Programming"  " in C"  " is fun\n");







}