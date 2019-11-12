#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main (void)
{
	srand(time(0));

	int goal = rand() % 50+1;
	int guess;
	int try;
	
	for (try = 0; try < 10; try++) {
		printf("Guess the number between 0 and 50: ");
		scanf("%d", &guess);

		if (guess > goal) {
			printf("Too high...\n");
		}
		else if (goal > guess) {
			printf("Too low...\n");
		}
		else if (goal == guess) {
			printf("Correct!\n");
			break;
		}
	}

	if (try == 10 && goal != guess) {
		printf("Sorry, the number was %d.\n", goal);
	}
	return 0;
}
