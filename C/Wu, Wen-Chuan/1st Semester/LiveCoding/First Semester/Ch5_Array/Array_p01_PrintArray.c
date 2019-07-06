#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int ary[5];
	for(i=0;i<5;i++)
	{
		ary[i]=rand()%101+1;
		printf("ary[%d]=%d\n",i,ary[i]);
	}
	system("pause");
	return 0;	
} 
