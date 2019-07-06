#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score=0;
	scanf("%d", &score);
	if(score>=90)
		printf("A\n");
	else if(score>=80)
		printf("B\n");
	else if(score>=70)
		printf("C\n");
	else
		printf("F\n");
	system("pause");
	return 0;
}
