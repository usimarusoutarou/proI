/*s6.c*/

#include<stdio.h>

int main(void)
{
	int heisei,seireki;
	printf("平成: ");
	scanf("%d",&heisei);
	seireki=1988+heisei;
	printf("平成 %dは西暦 %dです",heisei,seireki);
	
	return 0;
}