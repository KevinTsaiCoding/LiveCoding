#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define H 4
#define W 3
int main()
{
	int i,j,ScoreAry[H][W]={0},max=-1,min=101,student_row=0;
	/*�] student_row �ܼƬO�]���L�X�ǥ����: �ǥ�1, �ǥ�2, �ǥ�3, �ǥ�4*/
	float sum=0;
	printf("\t���1  ���2  ���3\n");
	srand(time(NULL));
	for(i=0;i<H;i++)
	{
		printf("�ǥ�%d\t",student_row+1); //��l��: student_row = 0;
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
