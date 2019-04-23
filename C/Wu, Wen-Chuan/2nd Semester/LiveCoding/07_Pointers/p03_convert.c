#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void convert(char *chPtr);
int main(void)
{
	char inputStr[80];
	gets(inputStr);
	convert(inputStr);
	puts(inputStr);
	system("pause");
	return 0;
}
void convert(char *chPtr) /* 意思等同於 void convert(char chPtr[0])*/
{
	for(*chPtr;*chPtr!='\0';chPtr++){
		if(*chPtr>='a'&&*chPtr<='z')
			*chPtr=*chPtr-32;
		else if(isupper(*chPtr))
			*chPtr=tolower(*chPtr);
	}
	return;
}
