#include<stdlib.h>
#include<stdio.h>
int main()
{
	system("color f2");
	int score=0;
	while(score>=0&&score<=100)
	{
		printf("What is your score:");
	scanf("%d", &score);
	if(score>=60)
		printf("pass\n");
	else
		printf("fail\n");
	}
		printf("score error");
	system("pause");
	return 0;
} 
