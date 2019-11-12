#include <stdio.h>

int main(void)

{ 
	int x;

	printf("Enter an integer:\n");
	scanf( "%d" , &x );
	
	if (x % 2 == 0) {
				printf("The integer is even\n");
			}
		else {	
				printf("The integer is odd\n");
			}
	return 0;
}
