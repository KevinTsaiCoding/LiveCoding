#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
#define N 6
/* �� "*" �έp50����Ƹ̲֭p 1~6�Ʀr�U�X�{�X�� */
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

