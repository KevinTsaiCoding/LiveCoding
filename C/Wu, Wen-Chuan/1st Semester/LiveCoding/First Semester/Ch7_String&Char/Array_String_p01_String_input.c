#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string_ary[10]; /* 宣告字串: char 名字[大小], char是 character縮寫 */
	printf("input: ");
	scanf("%s",string_ary);
	printf("Your input string: %s",string_ary);
	system("pause");
	return 0;
}
