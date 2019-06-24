#include<stdio.h>
#include<stdlib.h>
float my_fun(float a,float b,float c,int x);
int main()
{
	printf("Four values(a, b, c, x): ");
	float a,b,c;
	int x;
	scanf("%f%f%f%d",&a,&b,&c,&x);
	printf("f(%d)=%.2f\n",x,my_fun(a,b,c,x));
	return 0;
	system("pause");
}
float my_fun(float a,float b,float c,int x)
{
	float result;
	result=a*x*x*x-b*x+c;
}
