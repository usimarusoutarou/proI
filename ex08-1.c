/*ex08-1.c*/

#include<stdio.h>

int main(void)
{
	int heisei,seireki;
	
	printf("平成: ");
	scanf("%d",&heisei);
	seireki=heisei+1988;
	printf("平成 %d 年は西暦 %d 年です",heisei,seireki);
	
	return 0;
}