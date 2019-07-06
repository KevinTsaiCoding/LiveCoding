#include<stdio.h>
#include<stdlib.h>
//example in textbook 3-12 page
int main()
{
	int product=1;
	while(product<1024)
	{
		product*=2;
		printf("%d\n", product);
	}
	system("pause");
	return 0; 
}
