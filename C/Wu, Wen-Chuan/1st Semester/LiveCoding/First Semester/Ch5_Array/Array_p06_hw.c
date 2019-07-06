//°}¦C«Å§i¡G
//AI07xxxx §d¨Z®þ
 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void){
	int n;
	printf("input n:");
	scanf("%d",&n);
	
	int Arr[n], i, k, freq[SIZE]={0};
	for(i=0;i<n;i++){
		Arr[i]=rand()%100;
		if(Arr[i]>=0 && Arr[i]<=19)
			k=0;
		else if(Arr[i]>=20 && Arr[i]<=39)
			k=1;
		else if(Arr[i]>=40 && Arr[i]<=59)
			k=2;
		else if(Arr[i]>=60 && Arr[i]<=79)
			k=3;
		else
			k=4;
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

