#include<stdio.h>
#include<stdlib.h>
float func(float *a,float *b,int *c,int *x);
int main()
{
	int c,x;
	float a,b;
	printf("Four values (a, b, c, x):");
	scanf("%f%f%d%d",&a,&b,&c,&x);
	printf("f(%d) = %.3f\n",x,func(&a,&b,&c,&x));
	system("pause");
	return 0;
}
float func(float *a,float *b,int *c,int *x)
{
	float result;
	result=(*a)*(*x)*(*x)+(*b)*(*x)-*c;
	return result;
}
