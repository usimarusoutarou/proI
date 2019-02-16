/*ex10-1.c*/

#include<stdio.h>

int main(void)
{
	int m;
	printf("m: ");
	scanf("%d",&m);
	
	if(m>=0){
		printf("m‚Ì’l‚Í%d‚Å‚·",m);
	}else{
		printf("m‚Ì’l‚Í•‰‚Å‚·");
	}
	
	return 0;
}