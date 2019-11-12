#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/* Show a welcome message to the user. */
	printf("Welcome to the NineGaps game!... \n");
	printf("*********************************\n");
	printf("         ***************         \n");
	printf("              *****              \n");
	printf("                *                \n");             

	/* Start a loop to ask the level of difficulty from the player. */

	int play = 1;
	int diff;
	int val;
	int x;
	int y;
	int result = 0;
	int again;
	int valid = 0;
	int nest = 1;
	int cord = 0;
	int replay;

	while (play == 1) {

		/* Ask the player to select a level of difficulty. */
		while (valid == 0) {

			printf("Please select a difficulty:\n1) Beginner\n2) Intermediate\n3) Advanced\n4) Expert\n");
			scanf("%d", &diff);

			if (diff < 1 || diff > 4) {
				printf("Invalid difficulty, returning to menu.\n");
			}	
			else if (diff == 1) { 
				printf("Difficulty: Beginner.\n");
				valid++;
			}
			else if (diff == 2) {
				printf("Difficulty: Intermediate.\n");
				valid++;
			}
			else if (diff == 3) {
				printf("Difficulty: Advanced.\n");
				valid++;
			}
			else if (diff == 4) {
				printf("Difficulty: Expert.\n");
				valid++;
			}
		
		}
	
		while (nest == 1) {
		
			while (cord == 0) {

				printf("Enter the row number where you'd like to place an integer: ");
				scanf("%d", &x);
				
				if (x == 0) {
					cord++;
					nest++; 
					break;
				}

				printf("Enter the column number where you'd like to place an integer: ");
				scanf("%d", &y);

				if (y == 0) {
					cord++;
					nest++; 
					break;
				}

				if (y>3||x>3||x<1||y<1) {
					printf("INVALID COORDINATE\n");
					break;
				}		
		
				printf("Enter an integer between 1 and 9 that would like to place in your chosen position:\n");
				scanf("%d", &val);
				
				if (val == 0) {
					cord++;
					nest++;
					break;
				}

				else if (val>9) {
					printf("INVALID ENTRY\n");
					cord = 0;
					break;
				}

				if (result == 0) {
					printf("Success!\n");
				}
				else {
					printf("Failure.\n");
				}
			}
		}

		replay = 0;

		while (replay == 0) {

			printf("Would you like to play again?\n1) Yes\n2) No\n");
			scanf("%d", &again);

			if (again == 2) {
				printf("Thanks for playing! Goodbye!\n");
				play++;
				replay++;
			}
			else {
				printf("Reloading Game...\n");
				replay++;
				nest = nest - 1;
				cord = 0;
				valid = 0;
			}
		}
	}
}
