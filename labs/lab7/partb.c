#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	srand(time(NULL));

	int num[30];
	int entry;
	int freq = 0;
	int count, x;
	
	for (count = 0; count < 30; count++) {
		x = rand() % 21;
		num[count] = x;
		printf("%d\n", num[count]);
	}

	printf("Enter a number between 0 and 20: ");
	scanf("%d", &entry);

	for (count = 0; count < 30; count++) {
		
		if (num[count] == entry) {
			freq++;
		}

	}

	printf("The frequency of [%d] in the array is %d.\n", entry, freq);

}
	
