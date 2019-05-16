#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	/* ptr is sa constant pointer to an integer that can be modified
	through ptr, but ptr always points to the same memory location. */
	int * const ptr=&x;
	*ptr=7; // allowed: ptr is not a constant.
	printf("ptr mem: %d\n",ptr);
	printf("ptr next mem: %d\n",ptr+1);
	puts("integer 4 bytes");
	printf("ptr(also x) value: %d\n",*ptr);
	printf("ptr(also x) next value: %d\n",*ptr+1);
	puts("Declare a pointer (Data type + * +variable name)");
	
	system("pause");
	return EXIT_SUCCESS;
}
