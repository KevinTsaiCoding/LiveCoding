#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int *nPtr;
	nPtr = &n;
	printf("平方: %d\n", (*nPtr)*(*nPtr));
	printf("立方: %d\n", (*nPtr)*(*nPtr)*(*nPtr));
	system("pause");
    return 0;
}
