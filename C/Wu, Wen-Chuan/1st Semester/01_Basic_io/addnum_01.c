//first program: arithmetic(第一支程式: 四則運算)
//AI072162 蔡煒俊 
//107/9/21
#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("%d+%d = %d\n",2,2,2+2);
	printf("%d*%d = %d\n", 2,2,2*2);
	printf("%d-%d = %d\n", 2,2,2-2);
	printf("%d/%d = %f\n", 2,2,(float)2/2);
		/* in the program %d, d means digit, in other words, output
	interger number(在程式碼中 %d 中, d表示整數的意思, 從digit來)*/
	/*in the program %f, f means float, in other words, ouput
	 something that contains decimal(在程式碼中 %f 中, f表示浮點數的意思, 從float來)*/ 
	system("pause");
	return 0;
} 
