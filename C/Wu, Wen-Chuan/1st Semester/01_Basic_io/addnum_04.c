/*first program: arithmetic, declare variety number and using scanf 
function to input some numbers in the memory adress(�Ĥ@��{��: �|�h�B��,
 �ŧi�ܼƩM�ϥ�scanf�ӿ�J�����Ʀb�O�����l�W)*/ 
//AI072162 ���m�T 
//107/9/21
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int v1=0;
	int v2=0;/*for this steps we have declared the variety number of v1 and v2,
	 and set the initial valuse to 0(�ŧi�ܼ� v1, v2�A�åB�]��l�� 0)*/ 
	scanf("%d%d", &v1,&v2);//input two variey number by using one scanf(��scanf�˿�J�ܼ�) 
	printf("%d+%d = %d\n",v1,v2,v1+v2);
	printf("%d*%d = %d\n", v1,v2,v1*v2);
	printf("%d-%d = %d\n", v1,v2,v1-v2);
	printf("%d/%d = %f\n", v1,v2,(float)v1/v2);
	/* in the program %d, d means digit, in other words, output
	interger number(�b�{���X�� %d ��, d��ܾ�ƪ��N��, �qdigit��)*/
	/*in the program %f, f means float, in other words, ouput
	 something that contains decimal(�b�{���X�� %f ��, f��ܯB�I�ƪ��N��, �qfloat��)*/ 
	printf("%d %% %d = %d\n", v1 ,v2, v1%v2);/*how you output "%" in exe, and
											   get remainder(�p��N"%"�L�X��, �M����o�l��)*/ 
	system("pause");
	return 0;
} 
