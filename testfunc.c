#include <stdio.h>

int movePlayer(char direction, int incr, int curPos);

int main() {
    puts("Main Start");

    char inputIn[4] = "xxx";
    int positionIndex = 0;

    while ( inputIn[0] != 'Q' ) 
    {
        puts("\n Enter Direction (N, S, E, W) : \n");
        fgets(inputIn, 4, stdin);

        switch(inputIn[0])
        { 
            case 'N':
                positionIndex = movePlayer(inputIn[0], 1, positionIndex);
            break;

            case 'S':
                positionIndex = movePlayer(inputIn[0], -1, positionIndex);
            break;

            case 'E':
                positionIndex = movePlayer(inputIn[0], 8, positionIndex);
            break;

            case 'W':
                positionIndex -= movePlayer(inputIn[0], -8, positionIndex);
            break;

            case 'Q':
            break;

            default:
                    printf("Unknown Command: %c\n", inputIn[0]);
            break;
        }
    }

puts("Main Ends");

return 0;
}

int movePlayer(char direction, int incr, int curPos)
{
    int newPos = curPos + incr;

    printf("Player moved %c direction, new position %d \n", direction, newPos);

    return newPos;
}