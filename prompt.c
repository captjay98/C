#include <stdio.h>

double get_double(char *prompt, double min, double max)
{
    double input;

    do
    {
        printf("%s", prompt);
        scanf("%lf", &input);

        if (input < min) printf("Must be at least %lf\n", min);

        if (input > max) printf("Must be at most %lf\n", max);

    } while (input < min || input > max);

    return input;
}

int main()
{
    double x =get_double("Enter value:=", 6, 100);
    double y =get_double("Enter value:=", 6, 100);
    
    printf("value of x = %lf\n", x);

    printf("value of y = %lf\n", y);

    //double total = sqrt(pow(x,2) + pow(y,2));

    printf("value of total = %.2lf", x + y);
    
    return 0;


}
