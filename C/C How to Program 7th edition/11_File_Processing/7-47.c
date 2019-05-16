#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int value1=10000,value2;
    int *v1Ptr;
    v1Ptr = &value1;
    printf("v1Ptr: %ld\n", *v1Ptr);
    value2 = *v1Ptr;
    printf("value2:%ld\n", value2);
    system("pause");
    return EXIT_SUCCESS;
}
