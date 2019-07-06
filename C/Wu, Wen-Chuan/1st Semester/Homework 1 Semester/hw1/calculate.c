#include<stdio.h>
#include<stdlib.h>
//calculate平方和 和 和平方 

int main(){
	int v1;
	int v2;
	scanf("%d", &v1);
	scanf("%d", &v2);
	printf("平方和: %d\n", v1*v1+v2*v2);
	printf("和平方: %d", (v1+v2)*(v1+v2));
	return 0;
} 
