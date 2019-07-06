#include<stdio.h>
#include<stdlib.h> 
/*Mathmetic: power, by using while fuction, to
calculate the sum from 1 to 10.*/
int main(void)
{
	int sum=0;
	int c=1;
	while(c<=10)
	{
		sum=sum+c;
		c=c+1;
	}
	printf("%d\n",sum);
	system("pause");
	return 0; 
}
