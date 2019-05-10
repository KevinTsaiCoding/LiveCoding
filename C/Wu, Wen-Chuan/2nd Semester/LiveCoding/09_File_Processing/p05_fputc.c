#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fptr;
	FILE *cloned;
	fptr=fopen("a.txt","r");
	if(fptr==NULL){
		printf("File open failed\n");
	}
	else{
		cloned=fopen("clone.txt","w");
		char ch;
		ch=fgetc(fptr);
		while(ch!=EOF){
			printf("%c",ch);
			fputc(ch,cloned);/* 將 a.txt 檔案給 clone.txt */
			ch=fgetc(fptr);
		}
		fclose(fptr);
		fclose(cloned);
	}	
	system("pause");
	return 0;
}
