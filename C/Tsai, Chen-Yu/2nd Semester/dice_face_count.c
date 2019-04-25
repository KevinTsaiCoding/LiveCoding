#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 101
void randface(void);
void FreqCount(char *Face_resultPtr);
int main()
{
	randface(); // 呼叫產生亂數的函式  
	system("pause");
	return EXIT_SUCCESS;
}
void randface(void)
{
	char face[N]={0};
	int i;
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		face[i]=(rand()%6+1)+48;
	}
	puts("");
	FreqCount(face);
}
void FreqCount(char *Face_resultPtr)
{
	int i;
	int freq[6]={0};
	for(i=0;Face_resultPtr[i]!='\0';i++){
		freq[Face_resultPtr[i]-'1']++;
	}
	int j;
	puts("Face\tFreqency");
	for(j=0;j<6;j++)
	{
		printf("%d\t%d\n",j+1,freq[j]);
	}
}
