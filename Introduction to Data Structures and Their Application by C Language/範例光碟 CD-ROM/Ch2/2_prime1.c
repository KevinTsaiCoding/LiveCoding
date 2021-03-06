/****************************************************/
/*【程式名稱】: 2_prime1.c                          */
/*【程式功能】: 印出不大於 n 的所有質數             */
/*       輸入 : 大於 1 的整數 n                     */
/*       輸出 : 不大於 n 的所有質數                 */
/*【資料結構】:                                     */
/****************************************************/
/*【變數名稱及用途】                                */
/* isprime : 布林變數(true代表質數，false代表非質數)*/
/*   count : 統計質數總個數                         */
/****************************************************/

#include <stdio.h>

void main(void)
{
   int n, count = 0;
   int i, j;
   enum boolean isprime;
   enum boolean {false,true};

   clrscr();
   printf("請輸入大於 1 的整數 : ");
   scanf("%d",&n);

   printf("\n不大於 %d 的質數有...\n\n",n);
   /*----------------------------------------------------------*/
   /*  質數的定義：一個正整數，除了 1 和本身以外沒有別的因數   */
   /*            ：一個正整數，除了 1 和本身以外不能被其他的數 */
   /*              所整除                                      */
   /*----------------------------------------------------------*/
   for(i = 1; i <= n; i++){
      isprime = true;
      switch(i){
         case 1 : 		/* 1 非質數       */
            isprime = false;
            break;
         case 2 :		/* 2 是最小的質數 */
            break;
         default :
            for(j = 2; j < i; j++){
               if((i % j) == 0){/* i 可被 j 整除，非質數 */
                  isprime = false;
                  break;
               }
               else;
            }
      }
      if(isprime == true){	/* 印出質數 */
         count ++;
         printf("%3d ",i);
         if(count % 15 == 0)    /* 每印滿15個質數就跳下一行 */
	    printf("\n\n");
         else;
      }
      else;
   }
   printf("\n\n==> 不大於 %d 的質數共有 %d 個",n,count);
}