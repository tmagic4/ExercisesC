#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int col;
	int row;
	int num;
	int i = 0;
	
		printf("Please enter a row and column number, then an integer you'd like to place there: ");
		scanf("%d %d %d", &row, &col, &num);

	while (i == 0) {
		if (row == 0) {
			switch(col) {
				case 0:
				printf("%d is in position arr[1].\n", num);
				i++;
					break;
				case 1:
				printf("%d is in position arr[2].\n", num);
				i++;
					break;
				case 2:
				printf("%d is in position arr[3].\n", num);
				i++;
					break;
				default:
				puts("INVALID");
				i++;
				break;
			}
		}
		
		if (row == 1) {
			switch(col) {
				case 0:
				printf("%d is in position arr[4].\n", num);
				i++;
					break;
				case 1:
				printf("%d is in position arr[5].\n", num);
				i++;
					break;
				case 2:
				printf("%d is in position arr[6].\n", num);
				i++;
					break;
				default:
				puts("INVALID");
				i++;
				break;
			}
		}
	
		if (row == 2) {
			switch(col) {
				case 0:
				printf("%d is in position arr[7].\n", num);
				i++;
					break;
				case 1:
				printf("%d is in position arr[8].\n", num);
				i++;
					break;
				case 2:
				printf("%d is in position arr[9].\n", num);
				i++;
					break;
				default:
				puts("INVALID");
				i++;
				break;
			}
		}
	}
}

	
