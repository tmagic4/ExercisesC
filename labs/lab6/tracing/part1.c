#include <stdio.h>

int main(void)
{
	int i =1;

	while (i <= 136) {
		printf("%d*", i);
		i *= 3;
	}
	printf("\n");
}

// 1*3*9*27*81* 
