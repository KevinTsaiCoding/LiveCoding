#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str_ary[100000],uppercase,i,counter;// �ŧi��J�r��, �ŧi�^��r���j�g�N�X 
	printf("��J: ");
	gets(str_ary); // ��J�r�� 
	int letter[26]={0}; // �N�^��r���έp�`���k 0 
	for(i=0;str_ary[i]!='\0';i++)
	{ // ary[i]!='\0' �O�N��P�_�O�_������J  
		
		if(str_ary[i]>=97&&str_ary[i]<=122)
			str_ary[i]=str_ary[i]-32; // ���p�g�N�X�� 32 �ܦ��j�g 
	
		for(uppercase=65;uppercase<=90;uppercase++)
		{ // �]�^��r���j�g�N�X�O 66 ~ 90 
			if(str_ary[i]==uppercase)
			{ // �p�G��ʿ�J�r���� 32 �o�쪺�j�g�r�� == �j�g�N�X 
				letter[uppercase-65]=letter[uppercase-65]+1;
			}
		}
	}
	puts("���G:");
	puts("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	for(counter=0;counter<26;counter++)
	{
		printf("%d ",letter[counter]);
	}
	puts("");
	system("pause");
	return 0;
}
