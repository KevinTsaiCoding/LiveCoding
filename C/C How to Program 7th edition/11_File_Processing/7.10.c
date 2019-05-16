#include<stdio.h>
#include<stdlib.h>
int main()
{
	int one=600,two=500;
	printf("one: %d\ntwo: %d\n",one,two);
	int *m;
	m=&two;
	two=*m;
	printf("address m: %p\naddress two: %p\n",&m,&two);
	printf("m=%d\n",*m);
	system("pause");
	return EXIT_SUCCESS;
} 
