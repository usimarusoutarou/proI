/*proI2016-hw11-2-1EP1-04.c*/

#include<stdio.h>

int main(void)
{
	int l,m,n;
	
	printf("m: ");
	scanf("%d",&m);
	for(l=1;l<=3;l=l+1){
		n=m%10;
		m=m-n;
		m=m/10;
		printf("%d\n",n);
	}
	
	return 0;
}