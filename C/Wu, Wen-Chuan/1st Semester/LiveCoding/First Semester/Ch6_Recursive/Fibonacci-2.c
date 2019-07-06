#include<stdio.h>
#include<stdlib.h>
int fib(int n);
int counter;
int main()
{
	
	printf("費柏吶契數列第n項: ");
	int num;
	counter=0;
	scanf("%d",&num);
	printf("費柏吶契數列第%d項，其值為: %d\n",num,fib(num));
	printf("費柏吶契數列遞迴函式共呼叫%d次\n",counter);
	system("pause");
	return 0;
}
int fib(int n)
{
	counter++;
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
