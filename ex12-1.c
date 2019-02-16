/*ex12-1.c*/

#include<stdio.h>

int main(void)
{
	int m,i;
	
	printf("m: ");
	scanf("%d",&m);
	i=1;
	while(i<=m){
		printf("%d\n",i);
		i++;
	}
	
	return 0;
}