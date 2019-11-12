#include <stdio.h>

float areac(int r) {

	return (float)r * r * 3.14159;

}

int main(void) {

	int r;

	printf("Enter a radius for which you'd like to find the area of a circle: ");
	scanf("%d", &r);

	printf("The area of the circle is: %.2f.\n", areac(r));  

}
