#include <stdio.h>

//Movie rater

//Enter 999 to stop taking input and display results

int main(void)
{
    int ratingcounter[11], i, response;

    for (i = 1; i <= 10; i++)
    {
        ratingcounter[i] = 0;
    }

    puts(" Rate on a scale of 10\n");

    for (i = 1; ; ++i)
    {
        scanf("%i", &response);

        if (response == 999)
        {
            break;
        }

       if (response < 1 || response > 10)
        {
            printf(" %i is Out of range\n", response);
            puts(" Rate on a scale of 10\n");
        }

        else
            {
                ++ratingcounter[response];
            }
    }

    puts("\n\nRating   Ratings\n");
    puts("------   --------\n");

    for ( i = 1;  i <= 10;  ++i )
    {
          printf ("%4i%10i\n", i, ratingcounter[i]);
    }


    return 0;
}
