/*ex08-3.c*/

#include<stdio.h>

int main(void)
{
	double height,weight,BMI;
	printf("�g��[cm]: ");
	scanf("%lf",&height);
	printf("�̏d[cm]: ");
	scanf("%lf",&weight);
	height=height/100;
	BMI=weight/height/height;
	printf("BMI: %lf",BMI);
	
	return 0;
}