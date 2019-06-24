#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float my_fun(float x,int n);
int main()
{
	float x;
	int n;
	scanf("%f%d",&x,&n);
	printf("my_fun= %.2f",my_fun(x,n));
}
float my_fun(float x,int n)
{
	int i;
	float sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(x,i);
	}
	return sum;
}
