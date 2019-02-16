/*proI2016-hw13-1-1EP1-04.c*/

#include<stdio.h>

#define N 5

int main(void)
{
	double a[N];
	
	int b,c=0;
	
	for(b=0;b<N;b++){
		printf("a[%d]‚Ì’l: ",b);
		scanf("%lf",&a[b]);
	}for(b=0;b<N;b++){
		if(a[b]<=0.0){
			c++;
		}
	}printf("0.0ˆÈ‰º‚Ì—v‘f‚Í %d ŒÂ",c);
	
	return 0;
}