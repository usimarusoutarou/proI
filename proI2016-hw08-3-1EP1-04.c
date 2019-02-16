/*proI2016-hw08-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	double a,b,h,s;
	
	printf("a: ");
	scanf("%lf",&a);
	printf("b: ");
	scanf("%lf",&b);
	printf("h: ");
	scanf("%lf",&h);
	s=(a+b)*h/2.0;
	printf("s: %lf",s);
	
	return 0;
}