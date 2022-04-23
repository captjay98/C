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

   unsigned long long int o = 7797699978678786977776u;
   printf("%llu\n",o); // %llu unsigned long long int

   char namee[256];
   int agee;


    //inputs 
    
    printf("What's your name?\n");
    fgets(namee, 25, stdin);
   
    printf("My name is %s\n", namee);
  
  
    printf("How old are you %s?\n", namee);
    scanf("%d", &agee);

    printf("I am %d years old\n", agee);


  
   float item1 = 5.75;
   float item2 = 10.0;
   float item3 = 250.00;

   printf("item 1: $%-8.2f\n", item1); //  %.5 decimal precision
   printf("item 2: $%8.2f\n", item2); //   %8 minimum width field
   printf("item 3: $%-8.2f\n", item3); //  %- left align 


    //Maths

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


   double sq = sqrt(25); // Square Root of a Nmber
    printf("Square root of 25 is %lf \n", sq);


    double po = pow (2, 4); // 2 raised to the power of 4
    printf("Raised to the power = %lf\n", po);

    int ro = round(3.49); //Rounded
    printf("rounded = %d\n", ro);

    int ce = ceil(3.49); //Rounded up
    printf("Rounded up = %d\n", ce);

    int fl = floor(3.49); //Rounded down
    printf("Rounded Down = %d\n", fl);

    double fa = fabs(3.55); //Absolute Value
    printf("Rounded to = %lf\n", fa);

    double lo = log(3); //Logrithim
    printf("log of 3 =%lf\n", lo);

    double si = sin(45); // Sin of a number
    printf("Sin of 45 = %lf\n", si);

    double co = cos(45); //COs of a number
    printf("cos of 45 = %lf\n", co);

    double ta = tan(45); //Tan of a number
    printf("tan of  = %lf\n", ta);

    //Hypotenause Calculator

    double hypo1;
    double hypo2;
    double hypo3;

    printf("Enter Side A: ");
    scanf("%lf", &hypo1);


    printf("Enter Side B: ");
    scanf("%lf", &hypo2);

    hypo3 = sqrt(hypo1*hypo1 + hypo2*hypo2);

    printf("Side C: %lf", hypo3);


    //Age Checker    
    
    
    int pers;

    printf("\nHow old are you?");
    scanf("%d", &pers);

    if(pers >= 18){
        printf("You have passed the age check\n");
    }
    else if(pers <5 ){
        printf("You really should'nt be here\n");
    }
    else{
        printf("You have failed the age check\n");
    }



    return 0;
}
