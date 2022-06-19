#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	srand(time(NULL));

	struct hangman
	{
		int numLives;
		int numCorrect;
		int oldCorrect;
		int quit;
	};

	struct hangman game;
	
	game = (struct hangman) {5, 0, 0, 0};
	//game.numLives = 5;
	//game.numCorrect = 0;
	//game.oldCorrect = 0;
	//game.quit = 0;
	
	char guessWords[][16] ={
		"Ubuntu",
		"Windows",
		"android",
		"ios",
		"symbian",
		"kaios"
		};

	int randIndex = rand() % 6;
		
	int lenghtOfWord = strlen(guessWords[randIndex]);

	int letterGuessed[8] = { 0, 0, 0, 0, 0, 0, 0, 0};

	int loopIndex = 0;

	char guess[16];
	
	char letterEntered;

	/*printf("guessWords[%s] - randIndex[%i] - lenghtOfWord[%i]\n",
			guessWords[randIndex],
			randIndex,
			lenghtOfWord);*/ 

    puts("\n***HANGMAN***\n");
	puts("TIP! Name of Popular Operating Systems\n");

	while ( game.numCorrect < lenghtOfWord)
	{
       
		if (game.oldCorrect == game.numCorrect)
		{
	
			printf("\nYou Have %i Lives Left\n", game.numLives);
		}


		for (loopIndex = 0; loopIndex < lenghtOfWord; loopIndex++)
		{
			if(letterGuessed[loopIndex] == 1)
			{
				printf("%c", guessWords[randIndex][loopIndex]);
			}
			else{
				puts("-");
			}			
			
		}


		printf("Number correct so Far = %i\n", game.numCorrect);
		puts("Guess a Letter\n");
		fgets(guess, 16, stdin);

		if (strncmp(guess, "quit", 4) == 0)
		{
			game.quit = 1;
			break;
		}

		letterEntered = guess[0];
		printf("Letter Entered %c\n", letterEntered);

		game.oldCorrect = game.numCorrect;

		for (loopIndex = 0; loopIndex < lenghtOfWord; loopIndex++)
		{
			if(letterGuessed[loopIndex] == 1)
			{
				continue;
			}			
			
			if (letterEntered == guessWords[randIndex][loopIndex])
			{
				letterGuessed[loopIndex] = 1;
				game.numCorrect++;
			}
		}

		if (game.oldCorrect == game.numCorrect)
		{
			game.numLives--;
			puts("Sorry, Wrong Guess!\n");
			if(game.numLives == 0)
			{
				break;
			}
		}
		else{
			puts("Correct Guess, You Rock!!!");
		}

	}


	if (game.quit == 1)
	{
		puts("Player is a Loser\n");
	}
	else if(game.numLives == 0)
	{
		printf("You are out of Lives, the Correct word was %s\n", guessWords[randIndex]);

	}
	else{
		puts("Hurray!!! You Win!!!");
	}


	return 0;
}
