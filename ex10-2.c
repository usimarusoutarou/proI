/*ex10-2.c*/

#include<stdio.h>

int main(void)
{
	double d;
	
	printf("d: ");
	scanf("%lf",&d);
	
	if(d>=0.0){
		printf("dは0.0以上");
	}else{
		printf("dは負です");
	}
	
	return 0;
}