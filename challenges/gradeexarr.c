#include <stdio.h>

int main(void)
{
    int numberofGrades , i, grade, sum = 0;
    int gradetotal[6];
    int failurecount = 0;
    float average;
    

    puts("Enter Total grades");
    scanf  ("%i", &numberofGrades);

    for (i = 1; i <= 100; i++)
        gradetotal[i] = 0;

   

    for (i = 1; i <= numberofGrades; i++)
    {
        printf("Enter grade %i\n", i);
        scanf ("%i", &grade);

        gradetotal[i] = grade;

        sum += gradetotal[i];

        if (grade < 65)
        ++failurecount;

        
    }
    average = (float) sum / numberofGrades;

     puts("\n\nNo   Grade");
    puts("===========\n");

    for ( i = 1; i <= numberofGrades; i++)
         printf("%2i%6i\n", i, gradetotal[i]);

    printf("Average = %.2f \n", average);
    printf("Failures = %i\n", failurecount);
    

    return 0;
}