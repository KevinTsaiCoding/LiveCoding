#include<stdlib.h>
#include<stdio.h>
int main()
{
	system("color f2");
	int num;
	scanf("%d", &num);
	num = num%2;
		printf("%s\n",num==1?"even number":"odd number");
	system("pause");
	return 0;
} 
