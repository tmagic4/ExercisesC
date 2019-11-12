#include <stdio.h>

int factorial(int x) {

	int fact;
	int final;

	fact = x;

	for (; x > 0; x--) {

		if (fact == x)
			final = x;
		else 
			final = final * x;
	}

	return final;
}

int main(void) {

	int x;

	printf("Enter a number you'd like to find a factorial of: ");
	scanf("%d", &x);

	printf("%d! = %d\n", x, factorial(x));
}
