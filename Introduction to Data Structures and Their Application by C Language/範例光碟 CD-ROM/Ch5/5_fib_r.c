/*************************************************/
/*【程式名稱】: 5_fib_r.c                        */
/*【程式功能】: 遞迴函數(式)：列印出費氏數列     */
/*       輸入 : 整數 n                           */
/*       輸出 : 列印出第 n 項費氏數              */
/*【資料結構】: 遞迴                             */
/*************************************************/

#include <stdio.h>

long fib(long n);

/*-----------------------------------*/
/*   以遞迴方式列印出第 n 項費氏數   */
/*-----------------------------------*/ 
long fib(long n)
{
   if(n == 0)
      return 0; 
   if(n == 1)
      return 1;
   if(n > 1)
      return (fib(n-1) + fib(n-2));
   else 
      printf("\n錯誤! n 必須為大於 0 的整數!");
 }

void main(void)
{
   int i;

   clrscr( );
   printf("\n第 0 項至第 12 項費氏數為 : ");
   for(i=0; i <= 12; i++)
      printf("%ld  ",fib(i));
}