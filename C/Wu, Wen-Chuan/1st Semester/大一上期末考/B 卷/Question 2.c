#include<stdio.h>
#include<stdlib.h>
#define N 50
void reverse(char str[]);
int main()
{
	char string[N];
	printf("Input:");
	gets(string);
	reverse(string);
	return 0;
	system("pause");
}
void reverse(char str[])
{
	int i,character=0;
	for(i=0;str[i]!='\0';i++) // �r��'\0'��ܵ����r��A��for-loop�ΨӲզX�r��  
		character++;
	printf("Length: %d\n",character);
	printf("Reverse: ");
	int j;
	for(j=i-1;j>=0;j--)
	{// ��for-loop�Ψӭ˦L�r��  
		printf("%c",str[j]);
	}
	return;
}
