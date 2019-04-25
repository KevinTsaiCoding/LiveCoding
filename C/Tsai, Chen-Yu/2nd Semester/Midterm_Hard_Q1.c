#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
void Encrypted(char *str,int H,int W);
int main()
{
	char str[N];
	printf("Input:");
	fgets(str,N,stdin);
	int length=strlen(str);
	int W;
	printf("input :");
	scanf("%d",&W);
	int H;
	(length%W==0)?(H=length/W):(H=length/W+1);
	printf("Size: %d %d",W,H);
	puts("");
	int last=length-1;
	if(str[last]=='\n')
		str[last]='\0';
	Encrypted(str,H,W);
	system("pause");
	return EXIT_SUCCESS;
}
void Encrypted(char *str,int H,int W)
{
	char pwd[100][100]={0};
	int i,j,nowPos=0;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			pwd[i][j]=str[nowPos];
			nowPos++; 
		}
	}
	for(i=0;i<W;i++){
		for(j=0;j<H;j++){
			if(pwd[j][i]=='\0')
				continue;
			printf("%c",pwd[j][i]);
		}
	}
	puts("");
	return;
}
