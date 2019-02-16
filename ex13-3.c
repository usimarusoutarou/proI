/*ex13-3.c*/

#include<stdio.h>

int main(void)
{
	double a[5],sum;
	
	int b;
	
	for(b=0;b<=4;b++){
		printf("input a[%d]: ",b);
		scanf("%lf",&a[b]);
	}
	sum=a[0]+a[1]+a[2]+a[3]+a[4];
	printf("sum: %f",sum);
	
	return 0;
}