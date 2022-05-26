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
    
    score = Scorer("Enter Sore:=", 0, 100);
      
  
    if (score >= 90) printf("Score is %.2lf and your grade is A+", score);

    else if (score >= 80) printf("Score is %.2lf and your grade is A", score);

    else if (score >= 70) printf("Score is %.2lf and your grade is B", score);

    else if (score >= 60) printf("Score is %.2lf and your grade is C", score);

    else if (score >= 50) printf("Score is %.2lf and your grade is D", score);

    else if (score  < 50) printf("Score is %.2lf ad your grade is F", score);

    else puts("Invalid Input");
    


    return 0;

}
