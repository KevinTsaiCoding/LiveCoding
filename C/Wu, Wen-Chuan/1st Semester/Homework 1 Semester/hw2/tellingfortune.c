#include<stdio.h>//AI072162
#include<stdlib.h>//蔡煒俊 
int main()
{
	int i,j,k,l;
	int avg;
	printf("輸入車牌四個數字: \n",i,j,k,l);
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	scanf("%d", &l);
	avg = (i+j+k+l)%5;
	printf("車牌餘數: %d\n", avg);
	if(avg==0)
	{
		printf("大凶\n");
	}
	if(avg==1)
	{
		printf("算命結果: 凶\n");
	}
	if(avg==2)
	{
		printf("算命結果: 普通\n");
	}
	if(avg==3)
	{
		printf("算命結果: 吉\n");
	}
	if(avg==4)
	{
		printf("算命結果: 大吉\n");
	}
	system("pause");
	return 0;
}
