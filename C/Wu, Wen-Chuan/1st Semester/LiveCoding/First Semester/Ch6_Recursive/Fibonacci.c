#include<stdio.h>
#include<stdlib.h>
int fib(int nPtr);
int main()
{
	long int n;
	scanf("%d",&n);
	long int i;
	for(i=1;i<=n;i++)
		printf("f(%d)=%d\n",i,fib(i));
	system("pause");
	return 0;
}
int fib(int nPtr)
{
	if(nPtr==1||nPtr==0)
		return nPtr;
	else
		return fib(nPtr-1)+fib(nPtr-2);
}
