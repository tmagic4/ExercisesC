#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int sum;

	printf("Thomas Magic\n 110008849");

	printf("Enter an integer: \n");
		scanf( "%d" , &num1 );

	printf("Enter another integer: \n");
		scanf( "%d" , &num2 );

	sum = num1 + num2;

		printf("%d + %d = %d \n" , num1, num2, sum);

	int diff;

	diff = num2 - num1;

	printf("%d - %d = %d \n" , num2, num1, diff);

	int prod;

	prod = num1 * num2;

	printf("%d * %d = %d \n" , num1, num2, prod);

	int quot;

	quot = num1 / num2;

	printf("%d / %d = %d \n" , num1, num2, quot);

		return 0;
}

		

	
