#include <stdio.h>
#include <math.h>

// Solving Quadratic Equations using the Quadratic Formula
// x_to_the_n is basically lie the C pow fuction
// absVal brings the Absolute Value of the Number
// sqroot is basically like the sqrt C functon
// will turn the main to a function too soon to clean up the code



long int x_to_the_n(long int n, int p);
float absVal(float val);
double sqroot(double val);

int main()
{
	double i4 = 4 , a, b, c, cond0, cond1, cond2, cond4, x, y;

        puts("Enter a, b, c");
	scanf("%lf %lf %lf", &a,&b,&c);

	printf("a = %.1lf\nb = %.1lf\nc = %.1lf\n\n",a ,b , c);

	cond0 = x_to_the_n(b,2);
	printf("%.1lf rasised to the power of 2 = %.1lf\n\n", b, cond0);

	cond1 = i4 * a * c;
	printf("%lf x %.1lf x %.1lf = %.1lf\n\n",i4 , a, c, cond1);

	cond2 = sqroot(cond0 - cond1);
	printf("Squareroot of %.1lf - %.1lf = %.1lf\n\n", cond0, cond1, cond2);

	if ( cond2 < 0)
	{
		puts("Imaginary Number!!!!\n");
	}


	cond4 = 2 * a;
	printf("2 x %.1lf = %.1lf\n\n", a, cond4);

	x = (-b + cond2) / cond4;
	printf("(%.1lf + %.1lf) / %.1lf = %.1lf\n\n", b, cond2, cond4, x);

	y = (-b - cond2) / cond4;
	printf("(%.1lf - %.1lf) / %.1lf = %.1lf\n\n", b, cond2, cond4, y);

	printf(" Answer 1 = %lf\n\n Answer 2 = %lf", x, y);

	//sol1 = -b + sqroot(cond) / 2 * a;
	

	//sol2 = b + sqroot(cond) / 2 * a;
	

	return 0;
}
long int x_to_the_n(long int n, int p)
{
        long int result ;

        if(p != 0)
        {
                result = (n * x_to_the_n(n , p - 1));
        }
        else
        {
                result = 1;
        }
        return result;
}

float absVal(float val)
{
    if (val < 0)
        val = -val;
    return val;
}

double sqroot(double val)

{
    double epsilon = 0.0000001;
    double guess = 1;

    if (val < 0)
    {
        puts("Negative num\n");
        return - 1.0;
    }

    while (absVal(guess * guess - val) >= epsilon)
    {
        guess = (val / guess + guess) / 2.0;;
    }
    return guess;
}
