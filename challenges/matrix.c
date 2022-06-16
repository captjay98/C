#include <stdio.h>
int transposeMatrix(int mat[4][5], int newMat[5][4]);

int main()
{
    int mat[4][5]={
        {2,3,4,5,1},
        {2,3,4,5,1},
        {6,7,8,9,1},
        {6,7,8,9,1},
    };

    int newMat[5][4];

    //printf("%i", mat[0][2]);
    int x = transposeMatrix(mat, newMat);
    printf("%5i\n", x);

    return 0;

}

int transposeMatrix(int mat[4][5], int newMat[5][4])
{ 
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            newMat[column][row] = mat[row][column];
            //printf("%5i", mat[row][column]);
        }
        puts("\n");
    }

    puts("New Matrix \n");

     for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("%5i", newMat[row][column]);
        
        }
        puts("\n");
    }
    return newMat;
}

// printf("%5i", mat[row][column]);