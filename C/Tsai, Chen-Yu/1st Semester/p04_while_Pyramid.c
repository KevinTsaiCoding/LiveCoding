#include<stdio.h>
#include<stdlib.h>
/*AI072162_蔡煒俊 */ 
int main()
{
	int starcounter=1 /*=c*/,blankcounter=0 /*=c2*/;
	int n;
	
	scanf("%d", &n);//input n level;
	blankcounter=0;
	while(blankcounter<n){
		starcounter=0;
		while(starcounter<n-blankcounter){
			printf(" ");
			starcounter++;
		}
		starcounter=0;
		while(starcounter<blankcounter*2+1){
			printf("*");
			starcounter++;
		}
		puts("");
		blankcounter++;
	}
	system("pause");
	return 0;
}
