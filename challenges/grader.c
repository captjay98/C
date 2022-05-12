#include <stdio.h>

int main(void)
{
    int numberofGrades , i, grade;
    int gradetotal = 0;
    int failurecount = 0;
    float average;
    

    puts("Enter Total grades");
    scanf  ("%i", &numberofGrades);

    for (i = 1; i <= numberofGrades; ++i)
    {
        printf("Enter grade %i\n", i);
        scanf ("%i", &grade);

        gradetotal += grade;

        if (grade < 65)
        ++failurecount;
    }
    average = (float) gradetotal / numberofGrades;

    printf("Average = %.2f \n", average);
    printf("Failures = %i", failurecount);
}