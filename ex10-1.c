/*ex10-1.c*/

#include<stdio.h>

int main(void)
{
	int m;
	printf("m: ");
	scanf("%d",&m);
	
	if(m>=0){
		printf("m�̒l��%d�ł�",m);
	}else{
		printf("m�̒l�͕��ł�");
	}
	
	return 0;
}