#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y=5;
	int *yPtr; // declaration of pointer y
	yPtr=&y; // variable yPtr gets varibale y memory address
	printf("Memory Adress y: %d\n",&y);
	printf("Memory Adress yPtr: %d\n",&yPtr);
	printf("y value: %d\n",y);
	printf("yPtr value: %d\n",*yPtr);
	system("pause");
	return 0;
}
