#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void)
{
    int makeRand(void);

    int i, win = 0, tie = 0, loss = 0, coin;
    char playerMove, computerMove;
   
    bool status = true;
   
    


    while (status)
    {
        printf("| Ties = %i | Wins = %i | Losses %i | \n", tie, win, loss);
        coin = makeRand();

        while (status)
        {
             puts("Your Move: (R)ock (P)aper (S)cissors");

             scanf("%c", &playerMove);
             playerMove = toupper(playerMove);
             getchar();

            

             if (playerMove == 'Q')
             {
                 exit(0);
             }

             else if ((playerMove == 'R') || (playerMove == 'P') || (playerMove == 'S'))
             {
                 break;
             }
             else puts("Type one of R, P, S or Q");
        }

        if (playerMove == 'R') puts("ROCK versus");

        else if (playerMove == 'P') puts("PAPER versus");

        else if (playerMove == 'S') puts("SCISSORS versus");


        if (coin == 0)
        {
            computerMove = 'R';
            puts("ROCK");
        }

        else if (coin == 1)
        {
            computerMove = 'S';
            puts("SCISSORS");
        }

        else if (coin == 2)
        {
            computerMove = 'P';
            puts("PAPER");
        }


        if (computerMove == playerMove) 
        {
            puts("TIE!!!");
            tie+=1;
        }

        else if (playerMove == 'S' && computerMove == 'P')
        {
            puts("You Win!!");
            win+=1;
        }

        else if (playerMove == 'P' &&computerMove == 'S')
        {
            puts("You Lost!");
            loss+=1;
        }

        else if (playerMove == 'P' && computerMove == 'R')
        {
            puts("You Win!!");
            win+=1;
        }

        else if (playerMove == 'R' && computerMove == 'P')
        {
            puts("You Lost!");
            loss+=1;
        }

        else if (playerMove == 'R' && computerMove == 'S')
        {
            puts("You Win!!");
            win+=1;
        }

         else if (playerMove == 'S' && computerMove == 'R')
        {
            puts("You Lost!");
            loss+=1;
        }

        

        

       

    }

    return 0;

}

int makeRand(void)
    {

        int num, lower = 0, upper = 2, count = 1;

        srand(time(0));

        for (int i = 0; i < count; i++)
        {
            num = (rand() % (upper - lower + 1)) + lower;
        
        }
        return num;
    
    }