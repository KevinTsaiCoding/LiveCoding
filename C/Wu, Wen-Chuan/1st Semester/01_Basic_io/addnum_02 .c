/*first program: arithmetic and declare variety number(�Ĥ@��{��: �|�h�B��,�ŧi�ܼ�)*/ 
//AI072162 ���m�T 
//107/9/21
#include<stdio.h>
#include<stdlib.h>
int v1=8;
int v2=9;/*for this steps we have declared the variety 
number of v1 and v2(�ŧi�ܼ� v1, v2)*/
int main(void){
	printf("%d+%d = %d\n",v1,v2,v1+v2);
	printf("%d*%d = %d\n", v1,v2,v1*v2);
	printf("%d-%d = %d\n", v1,v2,v1-v2);
	printf("%d/%d = %f\n", v1,v2,(float)v1/v2);
	// in the program %d, d means digit, in other words, output interger number
	//in the program %f, f means float, in other words, ouput something that contains decimal
	system("pause");
	return 0;
} 
