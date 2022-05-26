#include <stdio.h>

int main(void)
{
    int vals[10];
    int index, i ;

    /*vals[0] = 50;
    vals[2] = 50;
    vals[3] = 50;
    vals[5] = 50;
    vals[6] = 50;
    vals[8] = 50;
    vals[10] = 50;*/

    for (i = 0; i < 10; i++) 
    {
        vals[i] = 0;
    }

    for (index = 0; index < 10; ++index) 
    {
        if (index % 2 != 0)
        {
        continue;
        }
        

        vals[index] = 50;
        printf (" Value[%i] = %i\n",index + 1, vals[index]);
    }



    return 0;
}