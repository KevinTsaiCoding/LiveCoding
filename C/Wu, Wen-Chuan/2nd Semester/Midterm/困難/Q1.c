#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
void Encrypted(char *sPtr,int H,int W);
int main()
{
	char str[N];
	printf("input:");
	fgets(str,N,stdin);
	int W;
	printf("input 欄:");
	scanf("%d",&W);
	int H;
	int length=strlen(str);
	(length%W==0)?(H=length/W):(H=length/W+1);
	printf("Size: %d %d\n",W,H);
	int last=length-1;
	if(str[last]=='\n')
		str[last]='\0';/* 表示 '\0' 那格 */
	Encrypted(str,H,W);
	system("pause");
	return 0;
}
void Encrypted(char *sPtr,int H,int W)
{
	char password[100][100];
	int i,j,nowPos=0;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			password[i][j]=sPtr[nowPos];
			++nowPos;
		}
	}
	for(i=0;i<W;i++){
		for(j=0;j<H;j++){
			if(password[j][i]=='\0')
				continue;
			printf("%c",password[j][i]);
		}
	}
	printf("\n");
}
