#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	srand(time(NULL));
	
	char guessWords[][16] ={
		"Ubuntu",
		"Windows",
		"android",
		"ios",
		"symbian",
		"kaios"
		};

	int randIndex = rand() % 6;
		
	int numLives = 5;
	int numCorrect = 0;
	int oldCorrect = 0;
		
	int lenghtOfWord = strlen(guessWords[randIndex]);
	int letterGuessed[8] = { 0, 0, 0, 0, 0, 0, 0, 0};

	int quit = 0;

	int loopIndex = 0;

	char guess[16];
	
	char letterEntered;

	/*printf("guessWords[%s] - randIndex[%i] - lenghtOfWord[%i]\n",
			guessWords[randIndex],
			randIndex,
			lenghtOfWord);*/ 

    puts("\n***HANGMAN***\n");
	puts("TIP! Name of Popular Operating Systems\n");

	while ( numCorrect < lenghtOfWord)
	{
       
		if (oldCorrect == numCorrect)
		{
	
			printf("\nYou Have %i Lives Left\n", numLives);
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


		printf("Number correct so Far = %i\n", numCorrect);
		puts("Guess a Letter\n");
		fgets(guess, 16, stdin);

		if (strncmp(guess, "quit", 4) == 0)
		{
			quit = 1;
			break;
		}

		letterEntered = guess[0];
		printf("Letter Entered %c\n", letterEntered);

		oldCorrect = numCorrect;

		for (loopIndex = 0; loopIndex < lenghtOfWord; loopIndex++)
		{
			if(letterGuessed[loopIndex] == 1)
			{
				continue;
			}			
			
			if (letterEntered == guessWords[randIndex][loopIndex])
			{
				letterGuessed[loopIndex] = 1;
				numCorrect++;
			}
		}

		if (oldCorrect == numCorrect)
		{
			numLives--;
			puts("Sorry, Wrong Guess!\n");
			if(numLives == 0)
			{
				break;
			}
		}
		else{
			puts("Correct Guess, You Rock!!!");
		}

	}


	if (quit == 1)
	{
		puts("Player is a Loser\n");
	}
	else if(numLives == 0)
	{
		printf("You are out of Lives, the Correct word was %s\n", guessWords[randIndex]);

	}
	else{
		puts("Hurray!!! You Win!!!");
	}


	return 0;
}
