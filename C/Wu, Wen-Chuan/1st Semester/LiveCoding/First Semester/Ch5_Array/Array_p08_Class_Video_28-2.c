#include<stdio.h>
#include<stdlib.h>
/*字元陣列的輸入，並倒著印 ex. input: hello; output: olleh -影片25 */
int main()
{
/*	char ary[20]={'H','e','l','l','o','W','o','r','l','d','\0'}; 上面種表示法需要結尾補 '\0' 
	char ary[20]="HelloWorld";  第 5 行 & 第 6 行都為字串宣告，不同寫法而已，但內容都一樣 */ 
	
	char ary[80]; // 宣告字串 

	scanf("%s",ary); // %s 是因要弄許多字元所組成的字串  
	 
/* 切記要 scanf字串不能加 "&"符號 和 後面的中括號 "[ ]"。*/
	
	int i;
	for(i=0;ary[i]!='\0';i++)
	{// ary[i]!='\0' 是代表判斷是否結束輸入  
		
	}
	printf("String length: %d\n",i);
	int j;
	printf("倒著印:");
	for(j=i-1;j>=0;j--)/* j=i-1 是因為現在 i 的位子是在 '\0'(字串最尾巴的地方) 
	因我們要倒著印，所以得減 1 讓位子跑到倒數第二格位子。*/
	{
	 	printf("%c",ary[j]); // %c 是因為要一個一個印字元  
	}
	puts("");
	system("pause");
	return 0;	
}
