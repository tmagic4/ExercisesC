#include <stdio.h>

int main(void)
{
	int i = 1;
	int a = 0;

	printf("Sum of %d ", i);

	do {
		a = a + i;
		i++;
	}

	while (i <= 5); 
	printf("to %d is %d\n", --i, a);
 	
}

// The sum of 1 to 4 is 10.
