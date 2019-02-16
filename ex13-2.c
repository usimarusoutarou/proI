/*ex13-2.c*/

#include<stdio.h>

int main(void)
{
	int a[5];
	
	int b;
	
	for(b=0;b<=4;b++){
		printf("input a[%d]: ",b);
		scanf("%d",&a[b]);
	}
	b=0;
	while(b<=3){
		printf("%d,",a[b]);
		b++;
	}printf("%d",a[b]);
	
	return 0;
}