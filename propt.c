#include <stdio.h>
#include "practice.h"

int main()
{
    int inpunit = charprompt("Enter Input Unit\n", 'F', 'C');
    printf("Input Unit is %c\n",inpunit);

    int outunit = charprompt("Enter output Unit\n", 'C', 'F');
    printf("output Unit is %c\n",outunit);

    return 0;

}