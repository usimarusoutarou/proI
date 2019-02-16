/*ex08-4.c*/

#include<stdio.h>

int main(void)
{
	int a,b,c,sum;
	double ave;
	
	printf("a: ");
	scanf("%ld",&a);
	printf("b: ");
	scanf("%ld",&b);
	printf("c: ");
	scanf("%ld",&c);
	sum=a+b+c;
	ave=sum/3.0;
	printf("‡Œv: %d,•½‹Ï: %lf",sum,ave);
	
	return 0;
}