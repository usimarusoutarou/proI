/*ex10-2.c*/

#include<stdio.h>

int main(void)
{
	double d;
	
	printf("d: ");
	scanf("%lf",&d);
	
	if(d>=0.0){
		printf("d��0.0�ȏ�");
	}else{
		printf("d�͕��ł�");
	}
	
	return 0;
}