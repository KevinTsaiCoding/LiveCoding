#include<stdio.h>
#include<stdlib.h> 
/*Mathmetic: power, by using while fuction, and
 this is for changing ©³¼Æ*/
int main(void)
{
	int c=1,product=1,d=0;
	scanf("%d", &d);
	while(c<=10)
	{	product=product*d;
		printf("%d^%d=%d\n",d,c,product);
		c=c+1;
	}
	system("pause");
	return 0; 
}
