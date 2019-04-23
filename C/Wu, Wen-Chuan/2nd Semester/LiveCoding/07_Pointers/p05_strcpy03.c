/* 陣列位移法  */
#include<stdio.h>
#include<stdlib.h>
void StrCopy(char str1[]);
int main()
{
	char str[80];
	gets(str);
	StrCopy(str);
	system("pause");
	return EXIT_SUCCESS;
}
void StrCopy(char str1[])
{
	char str2[80];
	int i=0;
	while(*(str1+i)!='\0'){
		str2[i]=*(str1+i);
		i++;
	}
	str2[i]='\0';
	puts(str2);
	return;
}
