#include<stdlib.h>
#include<stdio.h>
int main()
{
	system("color f2");
	int num;
	scanf("%d", &num);
	num = num%2;
	if(num==1)
		printf("It is an odd number");
	else
		printf("It is an even number");
	system("pause");
	return 0;
} 
