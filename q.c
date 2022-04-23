#include <stdio.h>

double Scorer(char *prompt, double min, double max)
{
    double input;

    do
    {
        printf("%s", prompt);
        scanf("%lf", &input);

        if (input < min) printf("Minimum cannot be less than %.2lf\n", min);

        if (input > max) printf("Maximum cannot be More than %.2lf\n", max);

    } while (input < min || input > max);

    return input;
}

int main()
{
    double score;
    
    score =Scorer("Enter Sore:=", 0, 100);
      
    printf("Score is = %.2lf\n", score);

    //double total = sqrt(pow(x,2) + pow(y,2));
    
    return 0;

}
