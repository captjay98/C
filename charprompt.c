#include <stdio.h>
#include <ctype.h>
#include "practice.h"

char charprompt(char *prompt, char iC, char iF)
{
    char input;
    input=toupper(input);

    do
    {
        puts(prompt);
        input=getchar();
        input=toupper(input);
        getchar();

        switch (input)
        {
            case 'C':
            return 'C';
            break;

            case 'F':
            return 'F';
            break;

            default:
            puts("Invalid Input, Enter either C or F.");

        }

        
    } while (input != iC || input != iF);
    return input;
}


/*

int main()
{
    int inpunit = charprompt("Enter Input Unit\n", 'C', 'F');
    printf("Input Unit is %c\n",inpunit);

    int outunit = charprompt("Enter output Unit\n", 'C', 'F');
    printf("output Unit is %c\n",outunit);

    return 0;

}

*/