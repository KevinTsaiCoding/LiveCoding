#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void AryLength(char *str);
int main()
{
	char ary[80];
	gets(ary);
	AryLength(ary);
	system("pause");
    return 0;
}
void AryLength(char *str)
{
	int n=0;
	int i;
	for(;*str!='\0';){
		n++;
		str++;
	}
	printf("String Length: %d\n",n);
	return;
}
