#include<stdio.h>
#include<stdlib.h>
#define N 50
void reverse(char str[]);
int main()
{
	char string[N];
	printf("Input:");
	gets(string);
	reverse(string);
	return 0;
	system("pause");
}
void reverse(char str[])
{
	int i,character=0;
	for(i=0;str[i]!='\0';i++) // 字串'\0'表示結束字串，此for-loop用來組合字串  
		character++;
	printf("Length: %d\n",character);
	printf("Reverse: ");
	int j;
	for(j=i-1;j>=0;j--)
	{// 使for-loop用來倒印字串  
		printf("%c",str[j]);
	}
	return;
}
