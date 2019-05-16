#include<stdio.h>
#include<stdlib.h>
#define N 20
size_t getSize(float *ptr);
/*size_t is a type that can hold any array index.*/
int main()
{
	float array[N];
	printf("The total bytes in the array is %d bytes\nbecause [(float 4 bytes)*(20 elements)]\n\n",sizeof(array));
	printf("Data types bytes of float is %d\n",getSize(array));
	system("pause");
	return EXIT_SUCCESS;
}
size_t getSize(float *ptr){
	return sizeof(ptr);
}
