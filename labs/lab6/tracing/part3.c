#include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 7;

	while (++i < j--) {
		printf("%d-%d\n", i, j);
	}
}

/* 
4-6
5-5
*/
