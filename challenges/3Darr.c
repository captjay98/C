#include <stdio.h>

int main(void)
{


int  M[4][5] = {
                    { 10,  5, -3, 17, 82 },
                    {  9,  0,  0,  8, -7 },
                    { 32, 20,  1,  0, 14 },
                    {  0,  0,  8,  7,  6 }
               };


int  O[4][5] = {
                    { 10,  5, -3, 17, 82 },
                    {  9,  0,  0,  8, -7 },
                    { 32, 20,  1,  0, 14 },
                    {  0,  0,  8,  7,  6 }
};
printf("%i", M[0][0] + O[0][0]);

return 0;
}