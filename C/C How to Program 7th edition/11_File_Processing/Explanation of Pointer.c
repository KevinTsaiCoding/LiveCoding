#include<stdio.h>
#include<stdlib.h>
int main()
{
	puts("\t\t\tValue(數值)\t\t\t*(值)\t\t\t&(址)");
	int array[3]={100,200,300};
	int *arrayPtr[3];
	int i;
	for(i=0;i<3;i++){
		printf("array[%d]\t\t%-3d\t\t\t\tX\t\t\t%p\n",i,array[i],&array[i]);
	}
	puts("----------------------------------------------------------------------------------------");
	for(i=0;i<3;i++){
		arrayPtr[i]=&array[i]; /* array陣列第 i 格 指向 arrayPtr指標第 i 格 */
		printf("arrayPtr[%d]\t\t%p\t\t%d\t\t\t%p\n",i,arrayPtr[i],*arrayPtr[i],&arrayPtr[i]);
	}
	puts("----------------------------------------------------------------------------------------");
	for(i=0;i<3;i++){ 
/* 陣列名稱為是 一 指標常數,array 表示此陣列第一個元素的位址，亦即 array 等同於 &array[0]。 */		
		arrayPtr[i]=array+1;
		if(i==0)
			printf("array\t\t\t%p\t\t%d\t\t\tX\n",array,*(array+i));
		else
			printf("array+%d\t\t\t%p\t\t%d\t\t\tX\n",i,array+i,*(array+i));
	}
	system("pause");
	return 0;
} 
