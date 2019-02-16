/*kimatu3-1EP1-04.c soutarou usimaru*/

#include<stdio.h>

#define N 7

int main(void)
{
	int a[N],i,m;
	
	for(i=0;i<N;i++){
		m=i+1;
		printf("%d”Ô–Ú‚Ì®”: ",m);
		scanf("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--){
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}