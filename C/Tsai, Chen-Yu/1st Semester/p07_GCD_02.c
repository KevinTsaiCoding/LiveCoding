#include<stdio.h> //Euclidean Algorithm
void Euclidean(int a, int b);
int main()
{
	puts("輾轉相除法");
	int parameter_1,parameter_2;
	printf("輸入A、B 兩數來做輾轉相除法(求兩數最大公因數): ");
	scanf("%d %d",&parameter_1,&parameter_2);
	Euclidean(parameter_1,parameter_2);
	return 0;
}
void Euclidean(int a, int b)// a equals parameter_1, b equals parameter_2
{
	while(a!=-1)
	{
		while(a>0&&b>0)
		{
			if(a>b)
				a%=b;
			else
				b%=a; 
		}
		if(a==0)
			printf("A、B兩數大公因數是: %d\n",b);
		if(b==0)
			printf("A、B兩數大公因數是: %d\n",a);
		printf("輸入A、B 兩數來做輾轉相除法(求兩數最大公因數): ");
		scanf("%d %d",&a,&b);
	}
	return;
}
