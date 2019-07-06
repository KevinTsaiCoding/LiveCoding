//°}¦C«Å§i¡G
//AI07xxxx §d¨Z®þ

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void){
	int n;
	printf("input n:");
	scanf("%d",&n);
	
	int Arr[n],i,k,freq[SIZE]={0};
	for(i=0;i<n;i++){
		Arr[n]=rand()%100;
		//printf("%2d ",Arr[n]);
		switch(Arr[n]/20){
			case 0: k=0; break;
			case 1: k=1; break;
			case 2: k=2; break;
			case 3: k=3; break;
			case 4: k=4; break;
		}
		freq[k]++;		
	}
	printf("\n");
	printf("%5s%10s%12s\n","class","value","histogram");	
	for(i=0;i<SIZE;i++){
		printf("%5d%10d   ",i,freq[i]);
		for(k=1;k<=freq[i];k++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
} 

