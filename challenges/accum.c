#include <stdio.h>
#include <stdbool.h>

double main(void)
{
    double i, j, Accumulator;
    char operator, p;


    puts("Enter digit and operator:- ");
    scanf("%lf %c", &i, &operator);
    getchar();


    if (operator == 'S')
    {
        printf("Accumulator = %lf\n", i);

        puts("Enter second digit and operator:- ");
        scanf("%lf %c", &j, &operator);
        
       
     

        switch (operator)
        {
             case '+':
                 printf("%.2lf + %.2lf = %.2lf",i,j, i+j);
                 break;

             case '-':
                 printf("%.2lf - %.2lf = %.2lf",i,j, i-j);
                 break;

             case '*':
                 printf("%.2lf * %.2lf = %.2lf",i,j, i*j);
                 break;

            case '/':
                printf("%.2lf / %.2lf = %.2lf",i,j, i/j);
                break;

            default:
                puts("ERROR");
                break;;

        }


       
    }
    
    /*else
    {
        switch (Accumulator)

        case 'S'
        printf("= %.2i", ++i);
        break;

       

        case 'E'
        break;

        default
        puts("ERROR")
    }*/


    return 0;

}