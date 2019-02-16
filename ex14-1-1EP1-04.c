/* ex14-1-1EP1-04.c */

#include <stdio.h>

#define N 5

int main(void) {
	int a[N];
	int i;

	for (i = 1; i <= N; i++) {
		printf("%d î‘ñ⁄ÇÃêÆêî: ",i);
		i=i-1;
		scanf("%d",&a[i]);
		i=i+1;
	}

	for (i = 0; i < N; i++) {
		printf("a[i]: %d",a[i]);
		if (a[i] > 0) {
			printf(", ê≥");
		} else if(a[i]<0) {
			printf(", ïâ");
		}
		printf("\n");
	}

	return 0;
}
