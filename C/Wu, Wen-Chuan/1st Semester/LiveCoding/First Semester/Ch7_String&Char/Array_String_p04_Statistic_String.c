#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[10];/* �ŧi�r��: char �W�r[�j�p], char�O character�Y�g */
	printf("Input a string: ");
	gets(string_ary);/* �o�ӥi�H�s���ť��䪺��J��Ū�i�h */  
	printf("Your string input is: %s\n",string_ary);
	int i,counter=0;
	for(i=0;string_ary[i]!='\0';i++)
	{
		counter++;
	}
	printf("String Length %d",counter);
	puts("");
	system("pause");
	return 0;
}
