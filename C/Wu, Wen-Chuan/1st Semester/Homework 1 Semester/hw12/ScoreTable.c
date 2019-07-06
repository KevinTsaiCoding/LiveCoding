#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define H 4
#define W 3
int student[H][W];
void showSTU(int stu[H][W]);
void SCOREcompare(int stu[H][W]);
void showPos(int stu[H][W]);
int main()
{
	int i,j;
	
	for(i=0;i<H;i++)
	{// 產生學生分數(亂數) 
		for(j=0;j<W;j++)
		{
			student[i][j]=rand()%101;
		}
	}
	// 呼叫自訂函式 
	 
	
	
	
	
}
