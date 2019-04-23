#include<stdlib.h>
#include<stdio.h>
void cubeANDsquare(int *nPtr);
int main()
{
	int n;
	scanf_s("%d", &n);
	cubeANDsquare(&n); // call cubeANDsquare function
	system("pause");
    return 0;
}
void cubeANDsquare(int *nPtr)
{
	printf("平方: %d\n",(*nPtr)*(*nPtr));
	printf("立方: %d\n",(*nPtr)*(*nPtr)*(*nPtr));
	return;
}
