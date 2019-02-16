/*proI2016-hw12-1-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int m;

	m=-1;
	while(m<0||m>100){
		printf("m(m>=0&&m<=100): ");
		scanf("%d",&m);
	}
	printf("m: %d",m);
	
	return 0;
}