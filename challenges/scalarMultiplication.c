#include <stdio.h> 

void scalarMultiplication(int matrix[3][5], int scalar);
void displayMatrix(int matrix[3][5]);


int main()
{ 
    int sampleMtrix[3][5] = 
        {
            {  7, 16, 55, 13, 12 },
            { 12, 10, 52,  0,  7 },
            { -2,  1,  2,  4,  9 }
        };

    puts("Original matrix");
    displayMatrix(sampleMtrix);


    scalarMultiplication(sampleMtrix, 2);

    puts("Matrix multiplication by 2");

    displayMatrix(sampleMtrix);

}

void scalarMultiplication(int matrix[3][5], int scalar)
{
    int row, column;

    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 5; column++)
        {
            matrix[row][column] *= scalar;
        }
    }
}

void displayMatrix(int matrix[3][5])
{ 
    int row, column;

    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 5; column++)
        { 
            printf("%5i", matrix[row][column]);
        }
        puts("\n");
    }
}