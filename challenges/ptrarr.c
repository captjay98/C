#include <stdio.h>
/*
int  arraySum (int  array[], const int  n)
{
     int  sum = 0, *ptr;
     int  * const arrayEnd = array + n;\
    
     for ( ptr = array;  ptr < arrayEnd;  ++ptr )
          sum += *ptr;
     return sum;
}
*/
int  arraySum (int  *array, const int  n)
{
     int  sum = 0;
     int  * const arrayEnd = array + n;
     for (  ; array < arrayEnd;  ++array )
          sum += *array;
     return sum;
}

void copyString (char  *to, char  *from)
{
     for (  ;  *from != '\0';  ++from, ++to )
          *to = *from;
}

void  copyString (char  *to, char  *from)
{
     while ( *from )
          *to++ = *from++;
     *to = '\0';
}


int main (void)
{
     int  arraySum (int  array[], const int  n);
     int  values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
     printf ("The sum is %i\n", arraySum (values, 10));

    void  copyString (char  *to, char  *from);
     char  string1[] = "A string to be copied.";
     char  string2[50];
     copyString (string2, string1);
     printf ("%s\n", string2);
     copyString (string2, "So is this.");
     printf ("%s\n", string2);

     return 0;
}

