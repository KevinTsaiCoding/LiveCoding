#include<stdio.h>
#include<stdlib.h>
void PrintString(const char *strPtr);
int main()
{
	char str[]="print characters of a string";
	puts("The string is:");
	PrintString(str); // function call
	puts("");
	system("pause");
	return 0;
}
void PrintString(const char *strPtr)
{
	for(/*(*strPtr==strPtr[0])*/;*strPtr!='\0'/*(==strPtr[i]!='\0')*/;strPtr++/*(==i++)*/)
	{
		printf("%c",*strPtr);
	}
	return;
}
