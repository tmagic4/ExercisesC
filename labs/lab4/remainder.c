include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	
	printf("Enter two integers:\n");
	scanf( "%d" "%d", &x, &y );

	z = x % y;

	printf("The remainder of %d / %d is %d \n", x, y, z);
	
	return 0;
} 
