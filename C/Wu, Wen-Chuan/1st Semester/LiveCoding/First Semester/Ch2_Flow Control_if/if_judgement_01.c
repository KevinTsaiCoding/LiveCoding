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
	system("pause");
	return 0;
} 
