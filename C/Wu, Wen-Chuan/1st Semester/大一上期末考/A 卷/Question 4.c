#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int W;
	printf("W: ");
	scanf("%d",&W);
	int H;
	printf("H: ");
	scanf("%d",&H);
	int GraphVal_X[H][W];
	int i,j;
	
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			GraphVal_X[i][j]=rand()%256;
		}
	}
	
	puts("X:");
	
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			printf("%-3d ",GraphVal_X[i][j]);
		}
		puts("");
	}
	
	int GraphVal_Y[H][W];
	
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			GraphVal_Y[i][j]=rand()%256;
		}
	}
	
	puts("Y:");
	
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			printf("%-3d ",GraphVal_Y[i][j]);
		}
		puts("");
	}
	
	float sum=0;
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			sum=sum+pow(GraphVal_X[i][j]-GraphVal_Y[i][j],2);
		}
	}
	puts("");
	float MSE;
	MSE=sum/(H*W);
	float PSNR;
	PSNR=10*log10(255*255/MSE);
	if(MSE==0)
		puts("PSNR: 0.000\n");
	else
		printf("PSNR: %.3f\n",PSNR);
	return 0;
	system("pause");
}
