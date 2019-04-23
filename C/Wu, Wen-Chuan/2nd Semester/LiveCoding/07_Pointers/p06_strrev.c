#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define N 10000
void reverse(char *str);
void display(char *str);
int main()
{
	char str[N];
	printf("輸入值:"); 
	gets(str);
	reverse(str);
	system("pause");
	return EXIT_SUCCESS;
}
void reverse(char *str)
{
	int last=strlen(str)-1;
	int i;
	for(i=0;str[i]!='\0';i++)
		str[i]=str[last-i];
}
void display(char *str)
{
	printf("%s\n",*str);
}
