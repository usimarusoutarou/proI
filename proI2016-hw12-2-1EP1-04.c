/*proI2016-hw12-2-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int k,l,m,n;
	
	printf("m: ");
	scanf("%d",&m);
	l=m;
	n=0;
	while(l>0){
		k=l%10;
		l=l-k;
		l=l/10;
		n++;
	}
	printf("%d ‚Í%d Œ…‚Ì®”",m,n);
	
	return 0;
}