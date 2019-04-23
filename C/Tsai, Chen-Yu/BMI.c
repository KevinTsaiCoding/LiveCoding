#include<stdio.h>
#include<stdlib.h> // AI072162 蔡煒俊 
int main()
{
	float h;
	float w;
	float b;
	/*declare your height(h), weight(w) and BMI(b)*/
	printf("輸入身高(cm): ");
	scanf("%f", &h);
	printf("輸入體重(kg): ");
	scanf("%f", &w);
	puts("");
	b = w/((h/100)*(h/100));
	printf("BMI:%.1f  ", b);
	if(b<18.5)
	{
		printf("體重過輕\n");
	}
	else if(b>=18.5 && b<24)
	{
		printf("正常範圍\n");
	}
	else
		printf("體重過重\n");
	system("pause");
	return 0;
} 
