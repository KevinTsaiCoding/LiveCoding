#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	if(i>j&&i>k)
		printf("%d is the biggest number\n",i);
	else if(j>i&&j>k)
		printf("%d is the biggest number\n",j);
	else
		printf("%d is the biggest number\n",k);
	system("pause");
	return 0;
}
