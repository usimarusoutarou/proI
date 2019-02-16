/*proI2016-hw09-1-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int a,a1,a2,a3,a4;
	
	printf("a: ");
	scanf("%d",&a);
	a1=(a==5);
	a2=(a!=3);
	a3=(a<10);
	a4=(a>=-2);
	printf("a==5...%d\n",a1);
	printf("a!=3...%d\n",a2);
	printf("a<10...%d\n",a3);
	printf("a>=-2...%d",a4);
	
	return 0;
}
	