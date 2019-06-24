#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void subStr(char *p1, char *p2);

int main(void){
	int n=0;
	char arr1[100],arr2[100];	
	printf("¦r¦ê:");
	gets(arr1);
	printf("¤l¦r¦ê:");
	gets(arr2);
	
	subStr(arr1,arr2);
	system("pause");
	return 0;
} 
void subStr(char *p1, char *p2){
	int total,i,len=strlen(p2);
	while(*p1!='\0'){
		i=0;
		while(*(p1+i)==*(p2+i)){
			i++;
		}
		if(i==len)
			total++;
		p1++;	
	}
	
	printf("¦¸¼Æ:%d\n",total);
	return ;
} 

