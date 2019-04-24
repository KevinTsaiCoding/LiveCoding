/*first program: arithmetic, declare variety number and using scanf 
function to input some numbers in the memory adress(第一支程式: 四則運算,
 宣告變數和使用scanf來輸入未知數在記憶體位子上)*/ 
//AI072162 蔡煒俊 
//107/9/21
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int v1=0;
	int v2=0;/*for this steps we have declared the variety number of v1 and v2,
	 and set the initial valuse to 0(宣告變數 v1, v2，並且設初始值 0)*/ 
	scanf("%d%d", &v1,&v2);//input two variey number by using one scanf(用scanf弄輸入變數) 
	printf("%d+%d = %d\n",v1,v2,v1+v2);
	printf("%d*%d = %d\n", v1,v2,v1*v2);
	printf("%d-%d = %d\n", v1,v2,v1-v2);
	printf("%d/%d = %f\n", v1,v2,(float)v1/v2);
	/* in the program %d, d means digit, in other words, output
	interger number(在程式碼中 %d 中, d表示整數的意思, 從digit來)*/
	/*in the program %f, f means float, in other words, ouput
	 something that contains decimal(在程式碼中 %f 中, f表示浮點數的意思, 從float來)*/ 
	printf("%d %% %d = %d\n", v1 ,v2, v1%v2);/*how you output "%" in exe, and
											   get remainder(如何將"%"印出來, 然後取得餘數)*/ 
	system("pause");
	return 0;
} 
