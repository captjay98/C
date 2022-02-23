#include <stdio.h>
#include <stdbool.h>

int main(){


   // Variables
   int x; //declaration
   x = 98; // initialization

   int y = 1998; // dec + int

   int age = 23; // integer %d
   const float IQ = 85.0; // floating point number %f //fixed value
   char iqg = 'B'; // single character %c
   char name[] = "Jamal"; // array of characters %s

   //Format specifiers

   printf("I am %s\n",name);
   printf("I am %d years old\n",age);
   printf("My iq grade is %c\n",iqg);
   printf("Your average score is %f\n",IQ);


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

   long long int p = 779769997897898776; //%lld long long int
   printf("%lld\n",p);

   unsigned long long int o = 779769997867878697789877776u;
   printf("%llu\n",o); // %llu unsigned long long int

  


   float item1 = 5.75;
   float item2 = 10.0;
   float item3 = 250.00;

   printf("item 1: $%-8.2f\n", item1); //  %.5 decimal precision
   printf("item 2: $%8.2f\n", item2); //   %8 minimum width field
   printf("item 3: $%-8.2f\n", item3); //  %- left align 



    int yt = 4;
    int xt = 3;
    yt+=1;
    xt-=1;

    int zt = yt + xt;
    int at = yt - xt;
    int bt = yt * xt;
    int ct = yt / xt;
    float dt = yt / (float) xt;
    int et  = yt % xt;

    yt++;
    xt--;

   printf("%d\n", zt);
   printf("%d\n", at);
   printf("%d\n", bt);
   printf("%d\n", ct);
   printf("%f\n", dt);
   printf("%d\n", et);
   printf("%d\n", yt);
   printf("%d\n", xt);

    return 0;
}
