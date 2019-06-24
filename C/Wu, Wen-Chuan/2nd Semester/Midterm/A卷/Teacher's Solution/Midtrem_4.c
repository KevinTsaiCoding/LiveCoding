#include <stdio.h>
#include <stdlib.h>
int strAscii(char *p);

int main(void){
	int n=0;
	char arr[100],*ptr;	
	printf("Input:");
	gets(arr);
	
	ptr=strtok(arr," ,.!;?");
	while(ptr!=NULL){
		//printf("%s\n",ptr);
		printf("%d: %s\n",strAscii(ptr),ptr);
		n++;
		ptr=strtok(NULL," ,.!;?");
	}
	printf("There are %d tokens.\n",n);
	system("pause");
	return 0;
} 
int strAscii(char *p){
	int total=0;
	while(*p!='\0'){
		total+=(*p);
		p++;
	}
	return total;
}
