#include <stdio.h>

int main(void)
{
    int ratingcounter[11], i, response;

    for (i = 1; i <= 10; i++)
        ratingcounter[i] = 0;

    puts("Enter your responses\n");

    for (i = 1; i <= 20; i++)
    {
        scanf("%i", &response);

        if (response < 1 || response > 10)
            printf("Bad response: %d\n", response);
        else
            ++ratingcounter[response];
    }

    puts("\n\nRating   Number of Responses");
    puts("================================\n");

    for ( i = 1; i <= 10; i++)
    {
        printf("%4i%14i\n", i, ratingcounter[i]);
    }

    return 0;
}