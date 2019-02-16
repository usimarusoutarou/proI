/*proI2016-hw10-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int m;
	
	printf("m: ");
	scanf("%d",&m);
	if(m>0){
		printf("m‚Í³");
	}else{
		if(m<0){
			printf("m‚Í•‰");
		}else{
			printf("m‚Í0");
		}
	}
	
	return 0;
}