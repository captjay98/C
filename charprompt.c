#include <stdio.h>
#include <ctype.h>

char charprompt(char *prompt, char C, char F)
{
    char input;
    input=toupper(input);

    do
    {
        puts(prompt);
        input=getchar();
        input=toupper(input);
        getchar();

        if (input < C) printf("Enter Either %c or %c\n", C, F);

        if (input > F) printf("Enter Either %c or %c\n", C, F);

    } while (input < C || input > F);
    return input;
}


int main()
{
    int inpunit = charprompt("Enter Input Unit\n", 'C', 'F');
    printf("Input Unit is %c\n",inpunit);

    int outunit = charprompt("Enter output Unit\n", 'C', 'F');
    printf("output Unit is %c\n",outunit);

    return 0;

}
