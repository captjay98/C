#include <stdio.h>

int main(void)
{
    int i, num, remainder;

    for ( i = 1; i <= 5; i++)

          for ( i = 1; i <= 5; i++)
          {
               puts("Enter Number");

               scanf  ("%i", &num);
               remainder = num % 2;
               
               if (remainder == 0)
               {
                   puts("Number is Even");
               }

               else if (remainder != 0)
               {
                   puts("Number is odd");
               }

               /* if (remainder == 0 && num/num == 1);
                {
                    puts("Number is Prime");
                }*/
    

          }

   

    return 0;
}

  
    
