#include<stdio.h>
#include<stdlib.h>
/*�r���}�C����J-�v��25 */
int main()
{
/*	char ary[20]={'H','e','l','l','o','W','o','r','l','d','\0'};
�W���ت�ܪk�ݭn������ '\0' 
	char ary[20]="HelloWorld";  
�� 5 �� & �� 6 �泣���r��ŧi�A���P�g�k�Ӥw�A�����e���@�� */ 
	char ary[80]; // �ŧi�r�� 
	scanf("%s",ary);
/* ���O�n scanf�r�ꤣ��[ "&"�Ÿ� �M �᭱�����A�� "[ ]"�C*/

	int i;
	for(i=0;ary[i]!='\0';)  
	{// ary[i]!='\0' �O�N��P�_�O�_������J  
		i++;
	}
	printf("String length: %d\n",i);
	system("pause");
	return 0;
	
}
