/*proI2016-hw10-3-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int m;
	
	printf("m: ");
	scanf("%d",&m);
	if(m>0){
		printf("m�͐�");
	}else{
		if(m<0){
			printf("m�͕�");
		}else{
			printf("m��0");
		}
	}
	
	return 0;
}