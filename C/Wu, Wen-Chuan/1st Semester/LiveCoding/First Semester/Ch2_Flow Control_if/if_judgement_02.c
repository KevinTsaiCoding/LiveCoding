#include<stdio.h>
int main()
{
 	int score;
 	printf("块 计, 耞琌の\n");
	scanf("%d", &score);
	if(score>=60)			 //狦(だ计 >= 60) 
	{
		printf("Pass\n");   //玥 (Pass) 
	}
	if(score<60)			//狦(だ计 < 60) 
	{
		printf("Fail\n");	//玥 (Fail) 
	}
	if(score==100)//狦(だ计 = 100) 
	{
		printf("High score")	//玥 (High score)
	}
	system("pause");
	return 0;
} 
