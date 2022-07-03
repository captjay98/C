#include <stdio.h>
#include <stdbool.h>

bool alpha(const char  c);
int countWords(const char string[]);

int main(void)
{   
    const char test[] = "Vamos Rafa - Rafel Nadal";
    const char text[] = "WooHoo... Sebastian Vettel";

    printf("%s - words = %i\n", test, countWords(test));
    printf("%s - words = %i\n", text, countWords(text));

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