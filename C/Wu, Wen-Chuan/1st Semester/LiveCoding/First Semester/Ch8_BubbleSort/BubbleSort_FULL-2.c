#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n=0,i=0,search_num=0;
	printf("n: ");
	scanf("%d",&n);
	int ary[n];
	srand(time(NULL));
	printf("排序前: ");
	for(i=0;i<n;i++)/* i弄起始值 */
	{
		ary[i]=rand()%131+50; // random number range from 50-180 
		printf("%-3d ",ary[i]); // prints the random number
	}
	puts("");
	int j;
	for(j=0;j<n-1;j++)
	{//需要產生 j 個回合  
		for(i=0;i<n-1;i++)
		{
			if(ary[i]>ary[i+1])
			{
				int temp=ary[i];
				ary[i]=ary[i+1];
				ary[i+1]=temp;
			}
		}
	}
	printf("排序前: ");
	for(i=0;i<n;i++)/* i弄起始值 */
	{
		printf("%-3d ",ary[i]);
	}
	puts("");
	system("pause");
	return 0;
}
