#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
	unsigned int values[SIZE]={2,4,6,8,10};
	unsigned int *vPtr;
	int i;
	printf("�}�C�U�Ъk :\n");
	for(i=0;i<SIZE;i++){
		printf("values[%d] = %d\n",i,values[i]);
	}
	puts("----------------------------------");
	vPtr=&values[0];// == vPtr=&values[0]; 
	puts("���Ц첾�k:");
	for(i=0;i<SIZE;i++){
		printf("*(vPtr+%i) = %d\n",i,*(vPtr+i));
	}
	puts("----------------------------------");
	puts("�}�C�첾�k:");
	for(i=0;i<SIZE;i++){
		printf("*(values+%d) = %d\n",i,*(values+i));
	}
	puts("----------------------------------");
	printf("vPtr+3 mem: %d, values: %d\n",(values+3),*(vPtr+3));
	puts("----------------------------------");
	system("pause");
	return 0;
} 
