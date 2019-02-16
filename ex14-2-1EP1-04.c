/* ex14-2-EP1-04.c */

#include <stdio.h>

#define N 5

int main(void) {
	int a[N];
	int b[N];
	int i;

	for (i = 0; i < N; i++) {
		printf("input a[i]: ");
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for (i = 1; i < N; i++) {
		b[i] = b[i-1] + a[i];
	}
	
	for (i = 0; i < N; i++) {
		printf("%4d, %4d\n",a[i],b[i]);
	}

	return 0;
}
