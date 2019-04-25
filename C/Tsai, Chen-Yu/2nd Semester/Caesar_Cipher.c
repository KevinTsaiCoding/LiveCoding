#include<stdio.h>
#include<stdlib.h>
const N=100;
#define H 27
int main()
{
	char model[H]={'Z','E','B','R','A','S','C','D','F','G','H','I','J',
					'K','L','M','N','O','P','Q','T','U','V','W','X','Y','\0'};
	printf("Correspondence Table: ");
	puts(model);
	printf("input: ");
	char inputStr[N],inputStr2[100]={0};
	gets(inputStr);
	printf("Original: ");
	puts(inputStr);
	int i;
	int SymbolCounter=0;
	for(i=0;inputStr[i]!='\0';i++){
		if(inputStr[i]>='a'&&inputStr[i]<='z'){
			inputStr[i]=toupper(inputStr[i]);
		}
		else if(inputStr[i]>='A'&&inputStr[i]<='Z'){
			inputStr[i]=inputStr[i];
		}
		else
			continue;
		++SymbolCounter;
		inputStr[i]=inputStr[i]-65;
		printf("%c",model[inputStr[i]]);
		if(SymbolCounter%5==0)
			printf(" ");
	}
	for(SymbolCounter=SymbolCounter;SymbolCounter%5!=0;SymbolCounter++){
		printf("-");
	}
	
	puts("");
	system("pause");
	return EXIT_SUCCESS;
}
