#include<stdio.h>
#include<stdlib.h>
/*字元陣列的輸入-影片25 */
int main()
{
/*	char ary[20]={'H','e','l','l','o','W','o','r','l','d','\0'};
上面種表示法需要結尾補 '\0' 
	char ary[20]="HelloWorld";  
第 5 行 & 第 6 行都為字串宣告，不同寫法而已，但內容都一樣 */ 
	char ary[80]; // 宣告字串 
	scanf("%s",ary);
/* 切記要 scanf字串不能加 "&"符號 和 後面的中括號 "[ ]"。*/

	int i;
	for(i=0;ary[i]!='\0';)  
	{// ary[i]!='\0' 是代表判斷是否結束輸入  
		i++;
	}
	printf("String length: %d\n",i);
	system("pause");
	return 0;
	
}
