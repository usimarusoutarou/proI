/* proI2016-hw10-1-1EP1-04.c */

#include <stdio.h>

int main(void) {
	double d;

	printf("d: ");
	scanf("%lf",&d);

	if (d >= 5.0) {
		printf("OK\n");
	} else {
		printf("NG\n");
	}

	return 0;
}
