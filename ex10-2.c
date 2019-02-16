/*ex10-2.c*/

#include<stdio.h>

int main(void)
{
	double d;
	
	printf("d: ");
	scanf("%lf",&d);
	
	if(d>=0.0){
		printf("d‚Í0.0ˆÈã");
	}else{
		printf("d‚Í•‰‚Å‚·");
	}
	
	return 0;
}