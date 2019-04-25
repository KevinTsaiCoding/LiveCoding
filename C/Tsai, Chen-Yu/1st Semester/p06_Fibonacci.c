#include<stdio.h>
#include<stdlib.h>
//費氏數列 Ex: A1=0 A2=1; A3=0+1=1; A4=1+1=2; A5=1+2=3; An=An-1+An-2;    
int main()
{
	int n;
	puts("費氏數列: ");
	printf("總共有n項請輸入n: ");
	scanf("%d",&n);
	while(n!=-1)
	{
		int a=0,b=1,c,i; 
		for(i=0;i<=n;i++)
		{
			if(i==0) // 因為 A1 值 是 0, 沒有前兩項無法計算前兩項和 
				printf("0 ");// 所以印出 0
			else if(i==1) // 因為 A2 值 是 1,前面值只有一項(值為 0) ,沒有前兩項,因此無法計算前兩項和 
				printf("1 ");// 所以印出 1
			else// 因 A3 項(包括)後有前兩項了, 所以可以計算前兩項合了 
			{
				c=a+b;
				a=b;
				b=c;
				printf("%d ",a+b);
			} 
		}
		puts("");
		puts("費氏數列: ");
		printf("總共有n項請輸入n: ");
		scanf("%d",&n);
	}
	system("pause");
	return 0;
}
