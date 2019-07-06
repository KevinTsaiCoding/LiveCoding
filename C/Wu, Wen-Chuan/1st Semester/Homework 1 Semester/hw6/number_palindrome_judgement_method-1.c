#include<stdio.h>
#include<stdlib.h>
/**/
int main()
{
	int number1,number2=0;
	int remainder,number3;
	printf("輸入: ");
	scanf("%d", &number1);
	
	for(number3=number1;number1>0;) /*number3 = number1 means the initial value is same,
	and we nned to compare the last value of number 1 and 3.*/
	{
		remainder = number1%10;// sth likes 122 % 10 = 2.
		number1 = number1/10;// now number1 = quotient
		number2 = number2*10 + remainder;/*number2 = 0*10 + (number1 % 10).*/
	}
	if(number2==number3)
		printf("%d 是迴文數字\n",number3);
	else
	
	printf("%d 不是迴文數字\n",number3);
	system("pause");
	return 0;
}
