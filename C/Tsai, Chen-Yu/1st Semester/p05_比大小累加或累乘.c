#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int num=0,a=50,sum=0;// a is the first compare number =>50.
	int i;
	printf("輸入: ");
	scanf("%d", &num);
	while(num!=-1)
	{
		while(num>=0)
		{
			if(num>=a)
			{
				sum = 1;
				for(i=2;i<=num;i++)
				{
					sum = sum + i;	
				}
				printf("%d>=%d: %d\n",num,a,sum);
			}
		else
			{
				sum = 1;
				for(i=2;i<=num;i++)
				{
					sum = sum * i;	
				}
				printf("%d<%d: %d\n",num,a,sum);
			}
		a = num;
		printf("輸入: ");
		scanf("%d", &num);
		}
	}
	system("pause");
	return 0;
}
