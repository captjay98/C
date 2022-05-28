#include <stdio.h>

//Understanding functions

void hello();

int hell(int j, int i);

int main()
{
    hello();
   
   
    int x = hell(65, 35);
    printf("%i", x);


}

void hello()
{
    puts("Hello\n");
}


int hell(int j, int i)
{
    int k = i + j;
    return k;
}

