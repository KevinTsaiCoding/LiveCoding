#include<stdio.h>
#include<stdlib.h>
int main()
{
	puts("\t\t\tValue(�ƭ�)\t\t\t*(��)\t\t\t&(�})");
	int array[3]={100,200,300};
	int *arrayPtr[3];
	int i;
	for(i=0;i<3;i++){
		printf("array[%d]\t\t%-3d\t\t\t\tX\t\t\t%p\n",i,array[i],&array[i]);
	}
	puts("----------------------------------------------------------------------------------------");
	for(i=0;i<3;i++){
		arrayPtr[i]=&array[i]; /* array�}�C�� i �� ���V arrayPtr���в� i �� */
		printf("arrayPtr[%d]\t\t%p\t\t%d\t\t\t%p\n",i,arrayPtr[i],*arrayPtr[i],&arrayPtr[i]);
	}
	puts("----------------------------------------------------------------------------------------");
	for(i=0;i<3;i++){ 
/* �}�C�W�٬��O �@ ���б`��,array ��ܦ��}�C�Ĥ@�Ӥ�������}�A��Y array ���P�� &array[0]�C */		
		arrayPtr[i]=array+1;
		if(i==0)
			printf("array\t\t\t%p\t\t%d\t\t\tX\n",array,*(array+i));
		else
			printf("array+%d\t\t\t%p\t\t%d\t\t\tX\n",i,array+i,*(array+i));
	}
	system("pause");
	return 0;
} 
