#include <stdio.h>

int main(void)
{ 
	int a;
	int b;
	int c;

	printf("Enter three integers: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a >= b && b >= c)	{
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", c, a);
	}
	else if (a >= c && c >= b) {
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", b, a);
	}
	else if (b >= a && a >= c) {
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", c, b);
	}
	else if (b >= c && c >= a) {
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", a, b);
	}
	else if (c >= b && b >= a) {
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", a, c);
	}
	else if (c >= a && a >= b) {
				printf("The smallest integer is %d.\nThe largest integer is %d.\n", b, c);
	}

return 0;
}
