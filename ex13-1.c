/*ex13-1.c*/

#include<stdio.h>

int main(void)
{
	int a[5]={80,60,22,50,75};
	
	int b;
	
	for(b=0;b<=4;b++){
		printf("a[%d]: %d\n",b,a[b]);
	}
	
	return 0;
}