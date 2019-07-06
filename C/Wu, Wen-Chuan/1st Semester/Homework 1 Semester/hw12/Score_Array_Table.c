#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define H 4
#define W 3
int main()
{
	int i,j,ScoreAry[H][W]={0},max=-1,min=101,student_row=0;
	/*設 student_row 變數是因為印出學生欄位: 學生1, 學生2, 學生3, 學生4*/
	float sum=0;
	printf("\t科目1  科目2  科目3\n");
	srand(time(NULL));
	for(i=0;i<H;i++)
	{
		printf("學生%d\t",student_row+1); //初始值: student_row = 0;
		for(j=0;j<W;j++)
		{
			ScoreAry[H][W]=rand()%101;
			sum=sum+ScoreAry[H][W];
			printf("%-3d\t",ScoreAry[H][W]);
		}
		puts("");
		student_row++; // student_row = student_row + 1 ;
	}
	
	system("pause");
}
