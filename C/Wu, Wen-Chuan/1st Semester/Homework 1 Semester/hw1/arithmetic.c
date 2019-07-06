//homework_1_arithmetic
#include<stdio.h>
#include<stdlib.h> 
int main(){
	int v1;
	int v2;
	scanf("%d", &v1);
	scanf("%d", &v2);
	printf("%d + %d = %d\t%d - %d = %d\n", v1, v2, v1+v2, v1, v2, v1-v2);
	printf("%d * %d = %d\t%d / %d = %d...%d", v1, v2, v1*v2, v1, v2, v1/v2, v1%v2);
}
