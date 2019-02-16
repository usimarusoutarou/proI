/*kimatsu4-1EP1-04.c soutarou usimaru*/

#include<stdio.h>

#define N 7

int main(void){
	int a[N]={2,7,4,1,6,3,5};
	int i,j;

	printf("a ... ");
	for (i=0;i<N;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	printf(" i|123456789\n");
	printf("--+---------\n");
	
	for(i=0;i<N;i++){
		printf("%d |",i);
		for(j=1;j<=a[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("--+---------\n");
	printf("  |123456789\n");

	return 0;
}
