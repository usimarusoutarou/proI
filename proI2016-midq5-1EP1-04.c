/*proI2016-midq5-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int s0,m,s;
	
	printf("s0: ");
	scanf("%d",&s0);
	m=s0/60;
	s=s0%60;
	printf("%d •b%d •ª%d •b",s0,m,s);
	
	return 0;
}