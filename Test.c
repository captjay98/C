#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("Hello, World\n");

    // A comment

    /* 
    A multiline comment
    Flexing
    */

    // newline
    printf("Hello\nOuter\nWorld\n");

   // tabs
    printf("Heres's the countdown\n");
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");

   // quotes
    printf("\"Never say Never, Ever\" - Jamal.\n");

   // Variables
   int x; //declaration
   x = 98; // initialization

   int y = 1998; // dec + int

   int age = 23; // integer %d
   float iq = 85.0; // floating point number %f
   char iqg = 'B'; // single character %c
   char name[] = "Jamal"; // array of characters %s

   //Format specifiers

   printf("I am %s\n",name);
   printf("I am %d years old\n",age);
   printf("My iq grade is %c\n",iqg);
   printf("Your average score is %f\n",iq);


   double i = 5.67895678956895678; // %lf more precisefloating point number
   printf("%0.16lf\n",i);

   bool e = true; // %d Booleans (TRue or False)
   printf("this is %d\n",e);

   char f = 97; // %d or %c // signed char longer characters 
   printf("%c%d\n",f,f);

   unsigned char g = 69; // %d %c posiive 255
   printf("%d%c\n",g,g);

   short h = 32500; //short int %d
   printf("%d\n",h);

   unsigned short j = 6500; //unsigned short int %u
   printf("%u\n",j);

   unsigned int l = 699999999; //%d unsigned int
   printf("%d\n",l);

   long long int p = 779769997897898776; //%lld ong long int
   printf("%lld\n",p);

   unsigned long long int o = 779769997867878697789877776u;
   printf("%llu\n",o); // %llu unsigned long long int







    return 0;
}



