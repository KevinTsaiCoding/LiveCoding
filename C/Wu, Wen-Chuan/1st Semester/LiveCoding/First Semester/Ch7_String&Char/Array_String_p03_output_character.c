#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[100];/* 宣告字串: char 名字[大小], char是 character縮寫 */
	printf("input: ");
	gets(string_ary);/* 這個可以連按空白鍵的輸入都讀進去 */  
	printf("Your input: %s\n",string_ary);
	int i=0;
	while(string_ary[i]!='\0') // '\0' 意思是字串結束 
	{
		printf("%c",string_ary[i]);
		i++;
	}
	puts("");
	system("pause");
	return 0;
}
