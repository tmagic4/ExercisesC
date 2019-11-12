#include <stdio.h>

int main(void)

{
	int leap;
 
	printf("Enter a year: ");
	scanf("%d" , &leap);

	if (leap % 100 == 0 && leap % 400 == 0) {
				printf("%d is a leap year.\n", leap);
			}
	else if (leap % 100 == 0 && leap % 400 != 0) {
				printf("%d is not a leap year.\n", leap);
			}
	else if (leap % 100 != 0 && leap % 4 == 0) {
				printf("%d is a leap year.\n", leap);
			}
	else if (leap % 100 != 0 && leap % 4 != 0) {
				printf("%d is not a leap year.\n", leap);
			}
	return 0;
}

