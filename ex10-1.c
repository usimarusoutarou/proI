/*ex10-1.c*/

#include<stdio.h>

int main(void)
{
	int m;
	printf("m: ");
	scanf("%d",&m);
	
	if(m>=0){
		printf("mの値は%dです",m);
	}else{
		printf("mの値は負です");
	}
	
	return 0;
}