#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000
int big[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
			16,17,18,19,20,21,22,23,24,25,26};
int small[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
			16,17,18,19,20,21,22,23,24,25,26};
void token(char *str);
int main()
{
	int times;
	printf("¦¸¼Æ:");
	scanf("%d",&times);
	fflush(stdin);
	int j=1;
	while(j<=times)
	{
		printf("input:");
		char str[N];
		gets(str);
		token(str);
		j++;
	}
	
	system("pause");
	return 0;
}
void token(char *str)
{
	char *tok;
	tok=strtok(str," ,.!;?");
	int tokens=0;
	while(tok!=NULL)
	{
		int i,sumBIG=0,sumSMALL=0;
		for(i=0;tok[i]!='\0';i++)
		{
			if(isupper(tok[i]))
				sumBIG=sumBIG+big[tok[i]-'A']+65-1;
			if(islower(tok[i]))
				sumSMALL=sumSMALL+small[tok[i]-'a']+97-1;
			else
				continue;
		}
		printf("%d:",sumBIG+sumSMALL);
		puts(tok);
		tok=strtok(NULL," ,.!;?");
		tokens++;
	}
	printf("There are %d tokens\n",tokens);
}
