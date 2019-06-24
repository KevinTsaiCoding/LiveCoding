#include<stdio.h>
#include<stdlib.h>
#define H 3
#define W 3
int main()
{
	int game[H][W];
	int i,j;
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			scanf("%d",&game[i][j]);
		}
	}
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			printf("%d ",game[i][j]);
		}
		puts("");
	}
	
	return 0;
	system("pause");
}
