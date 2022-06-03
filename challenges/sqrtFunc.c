#include <stdio.h>

float absVal(float val);
double sqroot(double val);

int main(void)

{
    puts("Enter Number: ");

    double y;
    scanf("%lf", &y);

    double x = sqroot(y);

    printf("Square root of %.2f = %.5lf ", y, x);

}

float absVal(float val)
{
    if (val < 0)
        val = -val;
    return val;
}

double sqroot(double val)
	
{
    double epsilon;
    double guess;

    puts("Enter Guess");
    scanf("%lf", &guess);

    puts("Enter epsilon");
    scanf("%lf)", &epsilon);

    if (val < 0)
    {
        puts("Negative num\n");
        return - 1.0;
    }

    int i = 1;
    while (absVal(guess * guess - val) >= epsilon)
    {
	guess = (val / guess + guess) / 2.0;
    	printf("Guess [%i] = %F\n",i, guess);
	    i++;
    }
    return guess;
}
