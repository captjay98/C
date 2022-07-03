#include <stdio.h>

void readLine(char buffer[]);

int main(void)
{
    int i;
    char line[85];


    puts("Enter not more than 85 characters");
    
    for (i = 0; i < 3; i++)
    {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;
}

void readLine(char buffer[])
{
    char character;
    int i = 0;
    

    do
    {
        character = getchar();

        buffer[i] = character;
        ++i;

    } while (character != '\n');
    buffer[i - 1] = '\0';
}