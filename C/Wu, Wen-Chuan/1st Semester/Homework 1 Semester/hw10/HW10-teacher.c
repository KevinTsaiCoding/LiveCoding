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
	printf("��J�G");
	gets(arr);
	
	int i,letter[26]={0};
	int len=strLEN(arr);	
	for(i=0;i<len;i++){
		if(arr[i]>=65 && arr[i]<=90) //�^��j�g 
			letter[arr[i]-65]++;
		if(arr[i]>=97 && arr[i]<=122) //�^��p�g
			letter[arr[i]-97]++;	
	}
	printf("���G:\n");
	for(i=0;i<26;i++)	
		printf("%3c",i+65);
	printf("\n");
	for(i=0;i<26;i++)	
		printf("%3d",letter[i]);
		printf("\n");
	system("pause");
	return 0;
}
