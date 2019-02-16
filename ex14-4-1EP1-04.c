/* ex14-4-1EP1-04.c */

#include <stdio.h>

#define N 4

int main(void) {
	int b[N];
	int d;
	int i;

	printf("input d: ");
	scanf("%d",&d);
	while (d < 0 || 15 < d) {
		printf("input d: ");
		scanf("%d",&d);
	}

	for (i = 0; i < N; i++) {
		b[i] = d % 2;
		d = d / 2;
	}

	for (i = N-1; i >= 0; i--) {
		printf("%d",b[i]);
	}
	printf("\n");

	return 0;
}
