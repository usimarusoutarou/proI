/*ex12-2.c*/

#include<stdio.h>

int main(void)
{
	int m;
	
	printf("m: ");
	scanf("%d",&m);
	while(m>=1){
		printf("%d ",m);
		m--;
	}
	printf("fire!");
	
	return 0;
}