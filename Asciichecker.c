#include <stdio.h>
#include <ctype.h>

int charprompt(char *prompt, int min, int max)
{
    char input;

    do
    {
        puts(prompt);
        scanf("%c", &input);
    
        if (input < min) printf("Invalid Character, Too Low %c\n", min);

        if (input > max) printf("Invalid character, Too High %c\n", max);

    } while (input < min || input > max);
    return input;
}


int main()
{
    char ch = charprompt("Enter Character or Digit\n", 32, 128);

    printf("Character = %c is Number = %d\n", ch, ch);

    return 0;

}
