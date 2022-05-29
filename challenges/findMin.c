#include <stdio.h>

int minNum(int vals[10]);

int main()
{
    int scores[10], i, minScore;

    puts("Enter Scores");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &scores[i]);
         
        if(scores[i] != ' ')
        printf("Score %i = %i\n", i +1, scores[i]);
        continue;
        
    }

    minScore = minNum(scores);
    printf("\n Minimun Score = %i\n", minScore);
}



int minNum(int vals[10])
{
    int minVal, i;

    minVal = vals[0];

    for (i = 1; i < 10; i++)
    {
        if (vals[i] < minVal)
        {
            minVal = vals[i];
        }
    }
    return minVal;
}

