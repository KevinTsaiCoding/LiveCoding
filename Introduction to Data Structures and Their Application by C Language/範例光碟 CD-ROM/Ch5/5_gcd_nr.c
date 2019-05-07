/*******************************************************************/
/*【程式名稱】: 5_gcd_nr.c                                         */
/*【程式功能】: 以非遞迴方式求兩正整數之GCD                        */
/*【資料結構】:                                                    */
/*******************************************************************/
/*【變數名稱及用途】                                               */
/*******************************************************************/

#include <stdio.h>

int gcd_nr(int a, int b);

/*---------------------------------*/
/*   以非遞迴方式求兩正整數之GCD   */
/*---------------------------------*/
int gcd_nr(int a, int b)
{
   int r;

   while(b != 0){
      r = a % b;
      a = b;
      b = r;
   }
   return a;
}  

void main(void)
{ 
   clrscr( );
   printf("gcd(123,36) = %d\n",gcd_nr(123,36));
   printf("gcd(1024,768) = %d\n",gcd_nr(1024,768));
   return;  
}