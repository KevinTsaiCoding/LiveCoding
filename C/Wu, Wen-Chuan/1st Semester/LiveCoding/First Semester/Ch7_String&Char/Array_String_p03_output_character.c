#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[100];/* �ŧi�r��: char �W�r[�j�p], char�O character�Y�g */
	printf("input: ");
	gets(string_ary);/* �o�ӥi�H�s���ť��䪺��J��Ū�i�h */  
	printf("Your input: %s\n",string_ary);
	int i=0;
	while(string_ary[i]!='\0') // '\0' �N��O�r�굲�� 
	{
		printf("%c",string_ary[i]);
		i++;
	}
	puts("");
	system("pause");
	return 0;
}
