/*proI2016-hw13-3-1EP1-04.c*/

#include<stdio.h>

#define N 5

int main(void)
{
	int a[N],b,max,c;
	
	for(b=0;b<N;b++){
		printf("a[%d]�̒l: ",b);
		scanf("%d",&a[b]);
	}max=a[0],c=0;
	for(b=1;b<N;b++){
		if(max<a[b]){
			max=a[b],c=b;
		}
	}
	printf("�ő�l: a[%d]=%d",c,max);
	
	return 0;
}