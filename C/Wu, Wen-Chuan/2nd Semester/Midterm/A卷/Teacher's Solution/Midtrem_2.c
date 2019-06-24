#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
void strEncry(char *ptr,int k);

int main(void){
	int n,i,rn;
	char arr[100];
	printf("¦¸¼Æ:");
	scanf("%d",&n);
	fflush(stdin);
	srand(time(NULL));
	
	for(i=1;i<=n;i++){
		printf("Input:");
		gets(arr);
		rn=rand()%26;
		printf("Rand:%d\n",rn);
		strEncry(arr,rn);
		printf("\n");
	}	
	system("pause");
	return 0;
} 
void strEncry(char *ptr, int k){
	while(*ptr!='\0'){
		if(isupper(*ptr))
			printf("%c",((*ptr)-65+k)%26+65);
		else if(islower(*ptr))
			printf("%c",((*ptr)-97+k)%26+97);
		else
			printf("%c",*ptr);
		ptr++;
	}
	printf("\n");
	return ;
}
