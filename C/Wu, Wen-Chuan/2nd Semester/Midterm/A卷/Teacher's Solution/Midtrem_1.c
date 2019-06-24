#include <stdio.h>
#include <stdlib.h>
int strLength(char *ptr);
void strReverse(char *ptr);

int main(void){
	int n,i;
	char arr[100];
	printf("¦¸¼Æ:");
	scanf("%d",&n);
	fflush(stdin);
	
	for(i=1;i<=n;i++){
		printf("Input:");
		gets(arr);
		printf("Len:%d\n",strLength(arr));
		strReverse(arr);
		printf("\n");
	}
	
	system("pause");
	return 0;
} 
int strLength(char *ptr){
	int total=0;
	while(*ptr!='\0'){
		total++;
		ptr++;
	}
	return total;
}
void strReverse(char *ptr){
	int i,total=strLength(ptr);
	printf("Rev:");
	for(i=total-1;i>=0;i--){
		printf("%c",*(ptr+i));
	}
	printf("\n");
	return ;
}
