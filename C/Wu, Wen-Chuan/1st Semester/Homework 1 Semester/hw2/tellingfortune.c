#include<stdio.h>//AI072162
#include<stdlib.h>//���m�T 
int main()
{
	int i,j,k,l;
	int avg;
	printf("��J���P�|�ӼƦr: \n",i,j,k,l);
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	scanf("%d", &l);
	avg = (i+j+k+l)%5;
	printf("���P�l��: %d\n", avg);
	if(avg==0)
	{
		printf("�j��\n");
	}
	if(avg==1)
	{
		printf("��R���G: ��\n");
	}
	if(avg==2)
	{
		printf("��R���G: ���q\n");
	}
	if(avg==3)
	{
		printf("��R���G: �N\n");
	}
	if(avg==4)
	{
		printf("��R���G: �j�N\n");
	}
	system("pause");
	return 0;
}
