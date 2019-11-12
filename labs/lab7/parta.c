#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));

	clock_t start, end;
	float elapse;
	int num;

	printf("Enter the number of integers you'd like in your array:\n");
	scanf("%d", &num);

	long array[num];
	int x;
	int count;

	for (count = 0; count <= (num-1); count++) {

		x = rand();
		array[count] = x;
		printf("%ld\n", array[count]);
	}

	start = clock();

	printf("\nBubble sorted:\n");

	int pass;

	for (pass = 0; pass <= (num-2); pass++) { 

		for (count = 0; count <= (num-1); count++) {
			
			int mew;

			if (array[count] > array[count+1])	{
			
				mew = array[count];
				array[count] = array[count+1];
				array[count+1] = mew;
			}

			if (pass == num-2) {
				printf("%ld\n", array[count]);
			}
		}
	}

	end = clock();
	elapse = ((float)(end-start))/CLOCKS_PER_SEC;
	printf("Elapsed Time: %f\n", elapse); 		
}
