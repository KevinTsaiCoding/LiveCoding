#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[10];/* �ŧi�r��: char �W�r[�j�p], char�O character�Y�g */
	printf("input: ");
	gets(string_ary);/* �o�ӥi�H�s���ť��䪺��J��Ū�i�h */  
	printf("Your input: %s\n",string_ary);
	system("pause");
	return 0;
}
