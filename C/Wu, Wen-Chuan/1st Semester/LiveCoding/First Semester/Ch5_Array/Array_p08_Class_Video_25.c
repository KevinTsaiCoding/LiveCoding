#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*陣列宣告：產生5個空間的陣列，將這些空間清空，
然後放入亂數讓它顯示出來。*/
int main()
{
	int ary[5];
	ary[0]=0;
	ary[1]=0;
	ary[2]=0;
	ary[3]=0;
	ary[4]=0;
/*上面的 7~11行 跟底下藉由 for 迴圈所引導的 
第 16 行意思是一樣的 */
	int i;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		ary[i]=0;
		ary[i]=rand()%100;
		printf("ary[%d]=%d\n",i,ary[i]);
	}
	return 0;
}
