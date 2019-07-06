#include<stdio.h>
//input two scores, calculate the average and output it.
//Need to show two decimal after the integer/.
int main()
{
	float i,j,avg;
	scanf("%f",&i);
	scanf("%f",&j);
	avg = (i+j)/2;
	printf("%.2f\n", avg);
	if(avg>=60)
	{
		printf("Pass\n");
	}
	if(avg<60)
	{
		printf("Fail\n");
	}
	system("pause");
	return 0;
}
