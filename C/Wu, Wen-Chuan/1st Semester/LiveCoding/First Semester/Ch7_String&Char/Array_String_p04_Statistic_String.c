#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[10];/* 宣告字串: char 名字[大小], char是 character縮寫 */
	printf("Input a string: ");
	gets(string_ary);/* 這個可以連按空白鍵的輸入都讀進去 */  
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
