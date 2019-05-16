#include<stdio.h>
#include<stdlib.h>
/*Using '*' and '&' pointer operations*/
int main()
{
	int a;
	int *aPtr;
	scanf("%d",&a);
	aPtr=&a;//取變數 a 的記憶體位子  
	printf("The address of a is %p\n"
			"The value of aPtr is %p\n",&a,aPtr);
	puts("");
		printf("The address of a is %d\n"
			"The value of aPtr is %d\n",a,*aPtr);
	
	system("pause");
	return EXIT_SUCCESS;
}
