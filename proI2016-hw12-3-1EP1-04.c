/*proI2016-hw12-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int max,m,sum;
	
	printf("max: ");
	scanf("%d",&max);
	m=1,sum=1;
	while(sum<max){
		m++;
		sum=sum+m;
	}
	printf("m: %d,sum: %d",m,sum);
	
	return 0;
}