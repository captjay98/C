#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { Omove, Xmove, EDGE, EMPTY};
enum { HUMANWIN, COMPWIN, DRAW};

const int Directions[4] = {1, 5 , 4, 6};

const int ConvertTo25[9] = {
          6 ,  7 ,  8,
        11, 12, 13,
        16, 17, 18
};

int GetNumForDir(int startsq, const int dir, const int *board, const int us)
{
        int found = 0;
        while (board[startsq] != EDGE)
        {
                if (board[startsq] != us)
                {
                    break;
                }
                found++;
                startsq += dir;
        }
        return found;
}

int FindThreeInARow(const int *board, const int ourindex, const int us)
{
        int DirIndex = 0;
        int Dir = 0;
        int threeCount = 1;

        for (DirIndex = 0; DirIndex < 4; ++DirIndex)
        {
                Dir = Directions[DirIndex];
                threeCount += GetNumForDir(ourindex + Dir, Dir, board, us);
                threeCount += GetNumForDir(ourindex + Dir * -1, Dir * -1, board, us);
                if (threeCount == 3)
                {
                    break;
                }
                threeCount = 1;
        }
        return threeCount;
}

void InitBoard(int * board)
{
    int index = 0;

    for (index = 0; index < 25; index++)
    {
        board[index] = EDGE;
    }

    for (index = 0; index < 9; index++)
    {
        board[ConvertTo25[index]] = EMPTY;
    }
}

void PrintBoard(const int *board)
{
    int index = 0;
    char pceChars[] = "OX|-";

    printf("\n     Board \n");

    for (index = 0; index < 9; index++)
    {
        if (index !=0 && index % 3 == 0)
        {
            puts("\n");
        }
        printf("%4c", pceChars[board[ConvertTo25[index]]] );
        }
        printf("\n");
}

int HasEmpty(const int *board)
{
    int index = 0;
    for (index = 0; index < 9; ++index)
    {
        if (board[ConvertTo25[index]] == EMPTY) return 1;
    }
    return 0;
}

void MakeMove(int *board, const int sq, const side)
{
    board[sq] = side;
}

int GetComputerMove(const int *board)
{
        int index = 0;
        int numFree = 0;
        int availableMoves[9];
        int randMove = 0;

        for (index =0; index < 9; ++index)
         {
                if(board[ConvertTo25[index]] == EMPTY)
                {
                        availableMoves[numFree++] = ConvertTo25[index];
                }
         }
         randMove = (rand() % numFree);
         return availableMoves[randMove];
}

int GetHumanMove(const int *board)
{
        char userInput[4];

        int moveOk = 0;
        int move = -1;

        while ( moveOk == 0 )
        {
                printf("Enter Move:-");
                fgets(userInput, 3, stdin);
                fflush(stdin);

                if ( strlen(userInput) !=2 )
                {
                        puts("Inavlid strlen");
                        continue;
                }
                
                if ( sscanf(userInput, "%d", &move) != 1 )
                {
                        move = -1;
                        puts("Inavlid sscanf");
                        continue;
                }
                if ( move < 1 || move > 9 )
                {
                        move = -1;
                        puts("Inavlid range");
                        continue;
                }
                move--;

                if ( board[ConvertTo25[move]] != EMPTY)
                {
                        move = -1;
                        puts("Inavlid square");
                        continue;
                }

                moveOk = 1;
    }
    printf("Making move... %d\n", (move+1));
    return ConvertTo25[move];
}

void RunGame()
{
        int Gameover = 0;
        int Side = Omove;
        int LastMoveMade = 0;
        int board[25];

        InitBoard(&board[0]);
        PrintBoard(&board[0]);

        while (!Gameover)
        {
            if (Side == Omove)
            {
                LastMoveMade = GetHumanMove(&board[0]);
                MakeMove(&board[0], LastMoveMade, Side);
                Side = Xmove;
            }
            else
            {
                LastMoveMade = GetComputerMove(&board[0]);
                MakeMove(&board[0], LastMoveMade, Side);
                Side = Omove;
                PrintBoard(&board[0]);
            }

            if (FindThreeInARow(board, LastMoveMade, Side ^ 1) == 3)
            {
                puts("Game Over!");
                Gameover = 1;
                if (Side == Omove)
                {
                    puts("Computer Wins");
                }
                else
                {
                    puts("Human Wins");
                }
            }

            if(!HasEmpty(board))
            {
                puts("Game Over!");
                Gameover = 1;
                puts("It's a Draw");
            }
        }
}
int main()
{
    srand(time(NULL));
    RunGame();

    return 0;
}