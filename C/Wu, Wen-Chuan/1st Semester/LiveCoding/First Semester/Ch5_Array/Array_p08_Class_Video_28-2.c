#include<stdio.h>
#include<stdlib.h>
/*�r���}�C����J�A�í˵ۦL ex. input: hello; output: olleh -�v��25 */
int main()
{
/*	char ary[20]={'H','e','l','l','o','W','o','r','l','d','\0'}; �W���ت�ܪk�ݭn������ '\0' 
	char ary[20]="HelloWorld";  �� 5 �� & �� 6 �泣���r��ŧi�A���P�g�k�Ӥw�A�����e���@�� */ 
	
	char ary[80]; // �ŧi�r�� 

	scanf("%s",ary); // %s �O�]�n�˳\�h�r���Ҳզ����r��  
	 
/* ���O�n scanf�r�ꤣ��[ "&"�Ÿ� �M �᭱�����A�� "[ ]"�C*/
	
	int i;
	for(i=0;ary[i]!='\0';i++)
	{// ary[i]!='\0' �O�N��P�_�O�_������J  
		
	}
	printf("String length: %d\n",i);
	int j;
	printf("�˵ۦL:");
	for(j=i-1;j>=0;j--)/* j=i-1 �O�]���{�b i ����l�O�b '\0'(�r��̧��ڪ��a��) 
	�]�ڭ̭n�˵ۦL�A�ҥH�o�� 1 ����l�]��˼ƲĤG���l�C*/
	{
	 	printf("%c",ary[j]); // %c �O�]���n�@�Ӥ@�ӦL�r��  
	}
	puts("");
	system("pause");
	return 0;	
}
