#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main(void)
{
	srand(time(0));

	int a;
	int b = 1;
	int x;
	int y;
	int z;
	int op = rand() % 3;
	int num1 = rand() % 10;
	int num2 = rand() % 10;

	for ( a = 0; a < b; a++ ) {
		printf("%d\n", num1);
	}

	for ( a = 0; a < b; a++ ) {
		printf("%d\n", num2);
	}

	for ( a = 0; a < b; a++ ) {
		printf("%d\n", op);
	}	

	x = num1 + num2;
	y = num1 - num2;
	z = num1 * num2;

	if ( op == 0 ) {
		printf("%d + %d = %d\n", num1, num2, x);
	}	
	else if ( op == 1 ) {
		printf("%d - %d = %d\n", num1, num2, y);
	}
	else if ( op == 2 ) {
		printf("%d * %d = %d\n", num1, num2, z);
	}
	return 0;

} 
