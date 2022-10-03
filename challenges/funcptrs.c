#include <stdio.h>




int sub(int a, int b)
{
    int x = a - b;
    return x;
} 



int div(int a, int b)
{
    int x = a / b;
    return x;
}



int main()
{
    int sum(int a, int b)
    {
        int x = 5 + 6;
        return x;
    }

    int mul(int a, int b)
{
    int x = a * b;
    return x;
}

    int (*sumptr) (int,int);
    sumptr = sum;

    int (*mulptr) (int,int);
    mulptr = mul;

    int (*op[2])(int, int);
    op[0] = sumptr;
    op[1] = mulptr;


    printf(" %d\n", op[0](5,6));
    printf(" %d\n", op[1](5,6));

}
