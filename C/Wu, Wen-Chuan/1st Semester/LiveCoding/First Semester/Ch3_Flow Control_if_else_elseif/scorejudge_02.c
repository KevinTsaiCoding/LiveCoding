#include<stdlib.h>
#include<stdio.h>
int main()
{
	system("color f2");
	int score;
	printf("What is your score:");
	scanf("%d", &score);
	if(score>=60)
		printf("pass\n");
	if(score<60)
		printf("fail\n");
	system("pause");
	return 0;
} 
