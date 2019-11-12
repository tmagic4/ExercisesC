#include <stdio.h>

long binary(long x) {
	
	long t = 2;
	long b = 0;

	while (t*2 < x) {
		t = t * 2;
	}

	while (t != 0) {

		if (x - t >= 0) {
			b = b * 10 + 1;
			x = x - t;
			t = t / 2;
		}
		else {
			b = b * 10;
			t = t / 2;
		}
	}

	return b;

}

int main(void) {

	long x;

	printf("Enter a number you'd like to translate into binary: ");
	scanf("%ld", &x);

	printf("Binary: %ld\n", binary(x));
}
