#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fptr;
	fptr=fopen("a.txt","r");
	if(fptr==NULL){
		printf("File open failed\n");
	}
	else{
		char ch;
		ch=fgetc(fptr);
		while(ch!=EOF){
			system("pause");
			ch=fgetc(fptr);
			printf("%c",ch);
		}
		fclose(fptr);
	}	
	system("pause");
	return 0;
}
