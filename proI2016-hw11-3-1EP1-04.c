/*proI2016-11-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int l,m,n;
	printf("m: ");
	scanf("%d",&m);
	for(l=1;l<=m;l=l+1){
		for(n=l;n<=m;n=n+1){
			printf("%d",n);
		}
		printf("\n");
	}
	
	return 0;
}