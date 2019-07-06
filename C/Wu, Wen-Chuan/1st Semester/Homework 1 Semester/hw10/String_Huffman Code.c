#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str_ary[100000],uppercase,i,counter;// 宣告輸入字串, 宣告英文字母大寫代碼 
	printf("輸入: ");
	gets(str_ary); // 輸入字串 
	int letter[26]={0}; // 將英文字母統計總數歸 0 
	for(i=0;str_ary[i]!='\0';i++)
	{ // ary[i]!='\0' 是代表判斷是否結束輸入  
		
		if(str_ary[i]>=97&&str_ary[i]<=122)
			str_ary[i]=str_ary[i]-32; // 讓小寫代碼減 32 變成大寫 
	
		for(uppercase=65;uppercase<=90;uppercase++)
		{ // 因英文字母大寫代碼是 66 ~ 90 
			if(str_ary[i]==uppercase)
			{ // 如果手動輸入字元減 32 得到的大寫字元 == 大寫代碼 
				letter[uppercase-65]=letter[uppercase-65]+1;
			}
		}
	}
	puts("結果:");
	puts("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	for(counter=0;counter<26;counter++)
	{
		printf("%d ",letter[counter]);
	}
	puts("");
	system("pause");
	return 0;
}
