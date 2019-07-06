#include<stdio.h>
#include<stdlib.h> 
/*Mathmetic: power, by using while fuction, to
calculate the sum of unknown students.*/
int main(void)
{
	int score=0;
	int sum=0;
	puts("Input a score\n");
	scanf("%d",&score);
	while(score!=-1)//in order to tell us wether we have input the SIGNAL VALUE(-1)
	{
		puts("Input a score\n");
		scanf("%d",&score);
		sum=sum+score;
	}
		printf("%d", sum);
	system("pause");
	return 0;
}
