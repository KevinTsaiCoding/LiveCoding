#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// calculate the average of 50 data, with define"'
int main()
{
	int i;
	float sum;
	int ary[50];
	srand(time(NULL));
	for(i=0;i<50;i++)
	{
		ary[i]=rand()%101+1;
		printf("��%d����Ʀ��Z:%d\n",i+1,ary[i]);
		sum=sum+ary[i];
	}
	printf("�`�M=%.2f\n",sum);
	printf("%.2f\n",sum/50);
	
	system("pause");
	return 0;	
} 
