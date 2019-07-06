#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[10];/* 宣告字串: char 名字[大小], char是 character縮寫 */
	printf("input: ");
	gets(string_ary);/* 這個可以連按空白鍵的輸入都讀進去 */  
	printf("Your input: %s\n",string_ary);
	system("pause");
	return 0;
}
