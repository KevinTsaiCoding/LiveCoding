#include <stdio.h>
#include <stdlib.h> 
int strLEN(char a[]){
	int i,c=0;	
	for(i=0;a[i]!='\0';i++)
		c++;
	return c;
}
int main(void){
	char arr[80];
	printf("輸入：");
	gets(arr);
	
	int i,letter[26]={0};
	int len=strLEN(arr);	
	for(i=0;i<len;i++){
		if(arr[i]>=65 && arr[i]<=90) //英文大寫 
			letter[arr[i]-65]++;
		if(arr[i]>=97 && arr[i]<=122) //英文小寫
			letter[arr[i]-97]++;	
	}
	printf("結果:\n");
	for(i=0;i<26;i++)	
		printf("%3c",i+65);
	printf("\n");
	for(i=0;i<26;i++)	
		printf("%3d",letter[i]);
		printf("\n");
	system("pause");
	return 0;
}
