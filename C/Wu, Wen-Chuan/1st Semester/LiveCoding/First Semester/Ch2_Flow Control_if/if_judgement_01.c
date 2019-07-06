#include<stdio.h>
int main()
{
 	int score;
 	printf("輸入一個 數值, 判斷是否及格\n");
	scanf("%d", &score);
	if(score>=60)			 //如果(分數 >= 60) 
	{
		printf("Pass\n");   //則 (印出Pass) 
	}
	if(score<60)			//如果(分數 < 60) 
	{
		printf("Fail\n");	//則 (印出Fail) 
	}
	system("pause");
	return 0;
} 
