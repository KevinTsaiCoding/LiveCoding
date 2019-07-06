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
	for(i=0;i<n;i++)/* i§Ë°_©l­È */
	{
		ary[i]=rand()%131+50;
	}
	printf("search: ");
	scanf("%d",&search_num);
	for(i=0;i<n;i++)
	{
		if(search_num==ary[i])
		{
			printf("Find %d at %d.\n",search_num,i);
			break;
		}
	}
	if(i==n)
		printf("Not Found %d in the Array.\n",search_num);
	system("pause");
	return 0;
}
