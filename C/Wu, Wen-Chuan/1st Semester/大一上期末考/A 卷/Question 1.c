#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float result(float a,float b,int c,int x);
int main()
{
	printf("Four values(a, b, c, x):");
	float a,b;
	int c,x;
	scanf("%f%f%d%d",&a,&b,&c,&x);
	printf("f(%d)=%.3f\n",x,result(a,b,c,x));
	return 0;
	system("pause");
}
float result(float a,float b,int c,int x)
{
	float res;
	res=a*pow(x,2)+b*x-c;
	return res;
}
