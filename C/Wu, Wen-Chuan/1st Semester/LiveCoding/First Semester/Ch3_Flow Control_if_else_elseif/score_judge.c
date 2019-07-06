#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score=0;
	scanf("%d", &score);
	if(score>=90)
		printf("A\n");
	else if(score>=80&&score<=89)
		printf("B\n");
	else if(score>=70&&score<=79)
		printf("C\n");
	else
		printf("F\n");
	system("pause");
	return 0;
}

