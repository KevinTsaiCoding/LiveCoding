#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int x=7;
    x=6; /* �ܼ� x�� �����Ӷi����, �ҥH�|�y�����~�T�� */
    printf("x: %d\n",x);
    system("pause");
    return EXIT_SUCCESS;
}
