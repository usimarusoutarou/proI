/*proI2016-test2-1-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int m;
	
	printf("m: ");
	scanf("%d",&m);
	m=m%3;
	if(m==1){
		printf("group 1");
	}else{
		if(m==2){
			printf("group 2");
		}else{
			printf("group 3");
		}
	}
	
	return 0;
}