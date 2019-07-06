#include<stdio.h>
#include<stdlib.h> 
/*Mathmetic: power, by using while fuction, to
calculate the average of 10 scores from 10 students.*/
int main(void)
{
	int score=0,sum=0,c=0;
	float avg;
	while(c<10)
	{
		puts("Input a score: ");
		scanf("%d", &score);
		sum+=score;
		c+=1;
	}
	avg=sum/10;
	printf("%.1f", avg);
	system("pause");
	return 0;
}
