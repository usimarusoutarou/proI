/*ex11-3.c*/

#include<stdio.h>

int main(void)
{
	int i,m,n;
	
	printf("m: ");
	scanf("%d",&m);
	for(n=1;n<=m;n=n+1){
		for(i=1;i<=n;i=i+1){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}