#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int strLength(char *sPtr);
void strReverse(char *sPtr);
int main(){
	int round;
	printf("¦¸¼Æ:");
	scanf("%d",&round);
	int i=1;
	while(i<=round){
		fflush(stdin);
		printf("Input:");
		char str[1000];
		gets(str);
		printf("Len: %d\n",strLength(str));
		strReverse(str);
		i++;
	}
	system("pause");
	return 0;
}
int strLength(char *sPtr){
	int length=strlen(sPtr);
	return length;
}
void strReverse(char *sPtr){
	sPtr=strrev(sPtr);
	printf("Rev: %s\n",sPtr);
}
