#include<stdio.h>
int main()
{
 	int score;
 	printf("��J�@�� �ƭ�, �P�_�O�_�ή�\n");
	scanf("%d", &score);
	if(score>=60)			 //�p�G(���� >= 60) 
	{
		printf("Pass\n");   //�h (�L�XPass) 
	}
	if(score<60)			//�p�G(���� < 60) 
	{
		printf("Fail\n");	//�h (�L�XFail) 
	}
	if(score==100)//�p�G(���� = 100) 
	{
		printf("High score")	//�h (�L�XHigh score)
	}
	system("pause");
	return 0;
} 
