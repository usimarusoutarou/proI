/*proI2016-hw13-2-1EP1-04.c*/

#include<stdio.h>

#define N 5

int main(void)
{
	int a[N],b,sum=0;
	
	double ave,dsum;
	
	for(b=0;b<N;b++){
		printf("a[%d]�̒l: ",b);
		scanf("%d",&a[b]);
	}
	for(b=0;b<N;b++){
		sum=sum+a[b];
	}dsum=(double)sum;
	ave=dsum/N;
	printf("���v: %d,����: %f",sum,ave);
	
	return 0;
}