/*ex12-3.c*/

#include<stdio.h>

int main(void)
{
	double d;
	d=0.0;
	while(d<=0.0){
		printf("d(>0.0): ");
		scanf("%lf",&d);
	}
	printf("d; %f",d);
	
	return 0;
}