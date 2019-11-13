#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Enter two numbers to you want to  add\n");
	scanf("%d", &a);
	scanf("%d", &b);

	c = a + b;

	printf("The sum of the numbers is : %d \n", c);

	return 0;
}
