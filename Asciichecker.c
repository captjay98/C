#include <stdio.h>
#include <ctype.h>

int AsciiChecker(char *prompt)
{
    char input;

    do
    {
        puts(prompt);
        scanf("%c", &input);

    } while (!input);
    return input;
}

int main()
{
    char ch = AsciiChecker("Enter Character or Digit\n");

    printf("Character = %c is Number = %d\n", ch, ch);

    return 0;
}
