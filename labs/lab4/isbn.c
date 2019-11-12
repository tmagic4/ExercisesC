#include <stdio.h>

int main(void)

{
	long isbn;
	long divide;
	int position;
	int sum;
	int digit;
	int check;
	
	printf("Enter the first twelve digits of an IBSN-13 number:\n");
	scanf("%12ld", &isbn);

	/* Divide long integer is to isolate each digit in isbn.*/

	divide = 100000000000;

	/* Position indicates which position each isbn number is in; will help for even/odd and alternatively multiplying my 1 and 3. */

	position = 0;

	/* Sum is going to be the sum of all the isbn numbers that were multiplied by one or three. */

	sum = 0;

	/* Main loop: allocates each digit, multiples by 1 or 3, decreases divide integer, counts position and will eventually print the check number. */

	while (position <= 11) {

		digit = (isbn / divide) % 10;

		/* If statement determines whether to multiply by 1 or 3, based on the digit being in an odd or even position. */

		if (position % 2 == 0) { 

			sum = ( 1 * digit ) + sum; }
		else {	
			sum = ( 3 * digit ) + sum; }
		
		/* Decreases divide variable so we can allocate next digit. */

		divide = divide / 10;

		/* Indicates we are in the next position. */

		position = position + 1;
		
		}

		/* Simply the equation to find the check number. */

		check = 10 - (sum % 10);

		/* If statement ensure the check number is printed only after each isbn number digit has been accounted for. */

		if (position >= 11) {

			printf("The check number is: %d.\n", check);

		}
	return 0;
	
}
	
