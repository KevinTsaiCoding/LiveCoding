#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 6
int main()
{
	printf("n: ");
	int n;
	scanf("%d",&n);
	printf("ÂI¼Æ 1 2 3 4 5 6\n");
	int i,dice[N]={0},RollValue[n];
	for(i=1;i<=n;i++)
		for(i=0;i<N;i++)
		{
			dice[i]=rand()%6+1;
			printf("%d ",dice[i]);
		}
	return EXIT_SUCCESS;
	system("pause");
}
