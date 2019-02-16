/*ex10-3.c*/

#include<stdio.h>

int main(void)
{
	double a,b;
	
	printf("a: ");
	scanf("%lf",&a);
	printf("b: ");
	scanf("%lf",&b);
	
	if(a>=3.0){
		if(b>=3.0){
			printf("‚ \n");
		}else{
			printf("‚¢\n");
		}
	}else{
		if(b>=3.0){
			printf("‚¤\n");
		}else{
			printf("‚¦\n");
		}
	}
	
	return 0;
}