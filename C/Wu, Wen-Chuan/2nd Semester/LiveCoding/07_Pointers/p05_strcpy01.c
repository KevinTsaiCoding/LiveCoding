/* 指標位移法 */
#include<stdio.h>
#include<stdlib.h>
void StrCopy(char *p1);
int main()
{
	char str[80];
	gets(str);
	StrCopy(str);
	system("pause");
	return EXIT_SUCCESS;
}
void StrCopy(char *p1)
{
	char str2[80];
	char *p2=&str2[0]; // == (*p2=str2)
	int i=0;
	while(*(p1+i)!='\0'){
		*(p2+i)=*(p1+i);
		i++;
	}
	*(p2+i)='\0';
	printf("%s\n",str2);
	return;
}
