#include<stdio.h>
#include<stdlib.h>
void changeValue(int *aPtr);
int main()
{
	int a=5;
	printf("Original Value of a: %d\n",a);
	changeValue(&a);
	printf("After changing value of a: %d\n",a);
	system("pause");
	return 0;
}
void changeValue(int *aPtr)
{
	*aPtr=10;
	return;
} 
