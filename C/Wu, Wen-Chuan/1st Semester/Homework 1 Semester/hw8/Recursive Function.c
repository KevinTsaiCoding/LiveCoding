#include<stdio.h>
/*Recursive Function_base^exponent. */
#include<stdlib.h>
int integerPower(int base, int exponent);
int main()
{
	int a,b; // a �@������(base), b �@������(exponent)
	printf("base=");
	scanf("%d",&a);
	printf("exponent=");
	scanf("%d",&b);
	printf("%d^%d=%d",a,b,integerPower(a,b));
	return 0;
}
int integerPower(int base, int exponent)
{
	if(exponent==1)
		return base;
	else if(exponent==0)
		return 1;
	else
		return (base*integerPower(base,exponent-1));
}
