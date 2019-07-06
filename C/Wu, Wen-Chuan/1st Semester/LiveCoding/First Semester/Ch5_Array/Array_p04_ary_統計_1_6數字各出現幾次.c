#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
#define N 6
/* 用 "*" 統計50筆資料裡累計 1~6數字各出現幾次 */
int main()
{
	int i,A[N]={0},r,j;
	for(i=0;i<SIZE;i++)
	{
		r=rand()%6;
		A[r]++;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t%d",i+1,A[i]);
		for(j=1;j<=A[i];j++) 
		{ /*print star.*/
			printf("*");
		}	
		printf("\n");
	}
	
	system("pause");
	return 0;
}

