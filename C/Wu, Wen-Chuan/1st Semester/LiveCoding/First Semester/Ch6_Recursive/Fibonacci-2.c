#include<stdio.h>
#include<stdlib.h>
int fib(int n);
int counter;
int main()
{
	
	printf("�O�f�o���ƦC��n��: ");
	int num;
	counter=0;
	scanf("%d",&num);
	printf("�O�f�o���ƦC��%d���A��Ȭ�: %d\n",num,fib(num));
	printf("�O�f�o���ƦC���j�禡�@�I�s%d��\n",counter);
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
