#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void convertToUppercase(char *strPtr);
#define N 100
int main()
{
	char Bstr[N];
	printf("Input a string:");
	gets(Bstr);
	printf("The string before conversion is %s\n",Bstr);
	convertToUppercase(Bstr); // function call
	printf("The string after conversion is %s\n",Bstr);
	system("pause");
	return 0;
}
void convertToUppercase(char *strPtr)
{
	int i;
	for(i=0;strPtr[i]!='\0';i++)
	{
		strPtr[i]=toupper(strPtr[i]);
	}
}
