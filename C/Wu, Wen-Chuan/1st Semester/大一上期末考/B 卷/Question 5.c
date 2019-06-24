#include<stdio.h>
#include<stdlib.h>
int fact(int a,int b);
int res(int fact);
int main()
{
	int a,b;
	printf("Two Values: ");
	scanf("%d%d",&a,&b);
	printf("%d~%d 的數字階層總和是 %d\n",a,b,fact(a,b));
	return 0;
	system("pause");
}
int fact(int a,int b)
{
	int result=0;
	int i;
	for(i=a;i<=b;i++)
	{
		result=result+res(i);
	}
	return result;
}
int res(int fact)
{
	int i,factorial=1;
	for(i=1;i<=fact;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
