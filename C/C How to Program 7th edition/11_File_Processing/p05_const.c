#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int x=7;
    x=6; /* 變數 x值 不應該進行更改, 所以會造成錯誤訊息 */
    printf("x: %d\n",x);
    system("pause");
    return EXIT_SUCCESS;
}
