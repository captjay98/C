#include <stdio.h>
int main (void)
{
     int  n, num, count = 1, triangularNumber;

     while (count <= 5) 
     {
          printf ("What triangular num do you want? ");
          scanf  ("%i", &num);
          
          triangularNumber = 0;
          for ( n = 1;  n <= num;  ++n )
               triangularNumber += n;
          printf ("Triangular num %i is %i\n\n", num, triangularNumber);
          count++;
     }
     return 0;
}




