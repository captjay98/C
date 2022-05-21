#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int makeRand(void)
    {

        int num, lower = 0, upper = 2, count = 1;

        srand(time(0));

        for (int i = 0; i < count; i++)
        {
            num = (rand() % (upper - lower + 1)) + lower;
        
        }
        return num;
    
    }

