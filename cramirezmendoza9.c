// Camila Ramirez
// CSC 321 Lab 9
/*
 * start of demo example
 *
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int game = 1;
	srand(time(NULL));
	int guess = 0, gameCounter = 0, i = 0;

	while (game == 1)
	{
		int rando = 10 + (rand() % 11);
		gameCounter++;

		printf("Game %d:\n", gameCounter);

		for (int i = 0; i < 3; i++)
		{
			printf("Enter a number between 10 and 20: ");
			scanf("%d", &guess);

			if (guess < rando)
			{
				printf("Too Low\n");
			}
			else if (guess > rando)
			{
				printf("Too high\n");
			}
			else
			{
				printf("You got it right");
				break;
			}
		}

		printf("Do you want to play again? Enter 1 for yes, 2 for no: ");
		scanf("%d", &game);

		if(game != 1)
		{
			printf("You played %d games\n", gameCounter);
			break;
		}
	}

	return EXIT_SUCCESS;

}

