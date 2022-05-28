#include <stdio.h>

float absVal(float val);
float sqroot(float val);

int main(void)

{
    puts("Enter Number: ");

    float y;
    scanf("%f", &y);

    double x = sqroot(y);

    printf("Squareroot of %.2f = %.5lf ", y, x);

}

float absVal(float val)
{
    if (val < 0)
        val = -val;
    return val;
}

float sqroot(float val)
{
    const float epsilon = 0.0001;
    float guess = 1.0;

    while (absVal(guess * guess - val) >= epsilon)
        guess = (val / guess + guess) / 2.0;

    return guess;
}