/*proI2016-hw07-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int a=12,b=34,c,d;
	
	printf("-----�����O-----\n");
	printf("a: %d,b: %d\n",a,b);
	
	c=a,d=b;
	a=d,b=c;
	
	printf("-----������-----\n");
	printf("a: %d,b: %d",a,b);
	
	return 0;
}