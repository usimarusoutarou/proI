/*proI2016-hw11-1-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int a,b;
	
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	if(a>=b){
		for(a=a;a>=b;a=a-1){
			printf("%d\n",a);
		}
	}
	
	return 0;
}