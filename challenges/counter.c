#include <stdio.h>
#include <stdbool.h>

bool alpha(const char  c);
int countWords(const char string[]);
void readLine(char buffer[]);

int main(void)
{   
    char text[85];
    int totalWords = 0;
    bool endOfText = false;

    puts(" Enter Text \n Press Enter When Done \n");

    while ( ! endOfText )
    { 
        readLine(text);

        if ( text[0] == '\0')
        {
            endOfText = true;
        }
        else{
            totalWords += countWords(text);
        }

        printf("\n There are %i words\a\n", totalWords);
    }
    return 0;
}

bool alpha(const char  c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else{
        return false;
    }
}

int countWords(const char string[])
{
    int i, wordCount = 0;
    bool lookingForward = true;

    for (i = 0; string[i] != '\0'; i++)
    {
        if( alpha(string[i]))
        {
            if( lookingForward)
            {
                ++wordCount;
                lookingForward = false;
            }
        }
        else{
            lookingForward = true;
        }
    }
    return wordCount;
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