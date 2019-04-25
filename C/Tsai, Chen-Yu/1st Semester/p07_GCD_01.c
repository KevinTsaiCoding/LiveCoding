#include<stdio.h> //Euclidean Algorithm 
#include<stdlib.h>
int main()
{
	int a,b;
	printf("輸入A、B 來做輾轉相除法: ");
	scanf("%d %d",&a,&b);
	while(a!=-1)
	{
		while(a%b!=0)
		{
			int temp=a%b;// this is for remainder
			a=b;
			b=temp;
		}
		printf("A、B 最大公因數是: %d\n",b);
		printf("輸入A、B 來做輾轉相除法: ");
		scanf("%d %d",&a,&b);
	}
	system("pause");
	return 0;
}
