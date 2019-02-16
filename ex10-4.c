/*ex10-4.c*/

#include<stdio.h>

int main(void)
{
	double a,b;
	
	printf("a: ");
	scanf("%lf",&a);
	printf("b: ");
	scanf("%lf",&b);
	
	if(a>=0.0&&b>=0.0){
		printf("‚ ");
	}else{
		if(a>=0.0&&b<0.0){
			printf("‚¢");
		}else{
			if(a<0.0&&b>=0.0){
				printf("‚¤");
			}else{
				printf("‚¦");
			}
		}
	}
	
	return 0;
}