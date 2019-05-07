/*********************************************************/
/*【程式名稱】: 8_shell_sort.c                           */
/*【程式功能】: 謝耳排序法－按「鍵值不遞減」排序         */
/*       輸入 : 一組未經排序的整數鍵值                   */
/*       輸出 : 每一回合排序之結果                       */
/*【資料結構】: 陣列結構                                 */
/*********************************************************/
/*【變數名稱及用途】                                     */
/*        d[] : 儲存待排序的鍵值以及排序過程中每一回合之 */
/*              結果                                     */
/*     Size,n : 陣列 d 的大小(元素個數)                  */
/*********************************************************/

#include <stdio.h>
#define Size 8

void print_org_data(const int d[], int n);
void print_array_data(const int d[], int n);
void swap(int *x, int *y);
void shell_sort_ascending(int d[], int n, int s);

/*------------------------------------------------*/
/*   列印排序前的鍵值資料(陣列 d 共有 n 個元素)   */
/*------------------------------------------------*/
void print_org_data(const int d[], int n) 
{
   int i;

   clrscr( );
   printf("陣列元素   d[0] [1] [2] [3] [4] [5] [6] [7] \n");
   printf("----------------------------------------------\n");
   printf("<排序前> ==> ");
   for(i = 0; i < n; i++){
      printf("%2d  ",d[i]);
   }
   printf("\n----------------------------------------------\n");
}

/*---------------------------------------------*/
/*   印出陣列 d 的內容(陣列 d 共有 n 個元素)   */ 
/*---------------------------------------------*/
void print_array_data(const int d[], int n)
{
   int i;

   for(i = 0; i < n; i++){
      printf("%2d  ",d[i]);
   }
   printf("\n");
}

/*---------------------------*/
/*   將 x,y 兩變數之值互換   */
/*---------------------------*/
void swap(int *x, int *y)
{
   int z = *x;

   *x = *y;
   *y = z;
}

/*----------------------------------------------------------*/ 
/*   謝耳排序法                                             */ 
/*     1.陣列 d 共有 n 個元素                               */ 
/*     2.按「鍵值不遞減」排序                               */ 
/*     3.將陣列 d 的鍵值分成 s 組(同組的鍵值都相距 s 個位移)*/ 
/*----------------------------------------------------------*/ 
void shell_sort_ascending(int d[], int n, int s)
{
   int i, j, a, step;
   int temp;

   step = 0;
   s = 3;
   do{
      for(a = 0; a < s; a++){
         for(i = a + s; i <= (n-1)/s*s + a && i <= n-1; i = i + s){
            temp = d[i];
            for(j = i - s; j >= 0; j = j - s){
               if(d[j] > temp)
                  d[j+s] = d[j];
               else
                   break;
            }
            d[j+s] = temp;
         }
      }
      printf(" 第%d回合 ==> ",++step);
      print_array_data(d, n);
      s = s - 1;
   }while(s >= 1);
}


void main(void)
{
   int d[Size]={83,66,55,21,88,18,88,99};

   print_org_data(d, Size); /* 列印排序前之鍵值資料 */

   /* 將陣列 d 裡的 Size 個鍵值按「鍵值不遞減」排序 */
   shell_sort_ascending(d,Size,3);
}