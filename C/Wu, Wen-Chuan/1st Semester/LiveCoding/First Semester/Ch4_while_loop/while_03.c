#include<stdio.h>
#include<stdlib.h> 
//Mathmetic: power, by using while fuction 
int main(void)
{
	int c=1,product=1;
	while(c<=10)
	{
		product=product*2;
		printf("2^%d=%d\n",c,product);
		c=c+1;
	} 
	system("pause");
	return 0; 
}
