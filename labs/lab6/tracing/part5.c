#include <stdio.h>

int main(void)
{
	unsigned int i = 5;

	for (; i >= 0; i--) {
		printf("%d\n", i);
	}
}

// Runs infinitely
