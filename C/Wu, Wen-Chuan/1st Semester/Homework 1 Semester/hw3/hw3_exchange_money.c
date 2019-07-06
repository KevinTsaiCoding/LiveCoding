#include<stdio.h>
#include<stdlib.h>/*hw3_AI072162_蔡煒俊*/
int main()
{
	int N,K,giftvalue,exchange,exchange_1,exchange_2;
	int exchange_3,exchange_4,exchange_5,exchange_6;/*N stands for object costs, 
	K stands for total numbers of the object.*/
	printf("禮物價格: ");
	scanf("%d", &N);
	printf("禮物個數: ");
	scanf("%d", &K);
	giftvalue=N*K;
	exchange = 1000 - N*K;
	puts("");
	exchange_1 = exchange/500; 
	if(exchange>=500)
		printf("500: %d\n", exchange_1);
	else
		printf("500: 0\n");
	exchange_2 = (exchange%500)/100;
	if (exchange>=100)
		printf("100: %d\n", exchange_2);
	else
		printf("100: 0\n");
	exchange_3 = ((exchange%500)%100)/50;
	if(exchange>=50)
		printf("50: %d\n", exchange_3);
	else
		printf("50: 0\n");
	exchange_4 = (((exchange%500)%100)%50)/10;
	if(exchange>=10)
		printf("10: %d\n", exchange_4);
	else
		printf("10: 0\n");
	exchange_5 = ((((exchange%500)%100)%50)%10)/5;
	if(exchange>=5)
		printf("5: %d\n", exchange_5);
	else
		printf("5: 0\n");
	exchange_6 = (((((exchange%500)%100)%50)%10)%5)/1;
	if(exchange>=1)
		printf("1: %d\n", exchange_6);
	else
		printf("1: 0\n");
	printf("店家找 %d 個零錢給小明\n", exchange_1+exchange_2+exchange_3+exchange_4+exchange_5+exchange_6);
	system("pause");
	return 0;
}
