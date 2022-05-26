#include <stdio.h>

int main(void)
{


    int i, fact = 1, n, count ;

    puts("Num    Factorial");
    puts("___   ____________");

    
        //puts("Enter a Number");
        //scanf("%d", &n);

        for ( i = 1; i <=10; i++)
        {
            fact = fact * i;
        printf(" %2i      %9i\n",i, fact);
        }

return 0;
    
}