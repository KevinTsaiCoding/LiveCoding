#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	printf("Size of array A: ");
	int Ha,Wa;
	scanf("%d%d",&Ha,&Wa);
	printf("Size of array B: ");
	int Hb,Wb;
	scanf("%d%d",&Hb,&Wb);
	// Matrix A
	puts("A:");
	int MatrixA[Ha][Wa];
	int i,j;
	for(i=0;i<Ha;i++)
	{
		for(j=0;j<Wa;j++)
		{
			MatrixA[i][j]=rand()%5+1;
			printf("%-2d ",MatrixA[i][j]);
		}
		puts("");
	}
	
	// Matrix B
	puts("B:");
	int MatrixB[Hb][Wb];
	for(i=0;i<Hb;i++)
	{
		for(j=0;j<Wb;j++)
		{
			MatrixB[i][j]=rand()%5+1;
			printf("%-2d ",MatrixA[i][j]);
		}
		puts("");
	}
	if(Wa!=Hb)
	{
		puts("A * B:");
		puts("µLªk­pºâ");
	}	
	else
	{
		puts("A * B:");
		for(i=0;i<Ha;i++)
		{
			for(j=0;j<Wb;j++)
			{
				printf("%-3d ",MatrixA[i][j]*MatrixB[i][j]);
			}
			puts("");
		}
	}
    system("pause");
    return 0;
}
