#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int col;
	int row;
	int num;
	int i = 0;
	int array[9];
	
		printf("Please enter a row and column number, then an integer you'd like to place there: ");
		scanf("%d %d %d", &row, &col, &num);

		if (row == 0) {
			switch(col) {
				case 0:
				array[0] = num;
				printf("%d is in position array[0].\n", num);
				i++;
					break;
				case 1:
				array[1] = num;	
				printf("%d is in position array[1].\n", num);
				i++;
					break;
				case 2:	
				array[2] = num;
				printf("%d is in position array[2].\n", num);
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
				array[3] = num;
				printf("%d is in position array[3].\n", num);
				i++;
					break;
				case 1:
				array[4] = num;	
				printf("%d is in position array[4].\n", num);
				i++;
					break;
				case 2:	
				array[5] = num;
				printf("%d is in position array[5].\n", num);
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
				array[6] = num;
				printf("%d is in position array[6].\n", num);
				i++;
					break;
				case 1:
				array[7] = num;	
				printf("%d is in position array[7].\n", num);
				i++;
					break;
				case 2:	
				array[8] = num;
				printf("%d is in position array[8].\n", num);
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

	
