#include <time.h>
#define Num 10
int data[10] = {79, 8, 6, 93, 59, 84, 55, 9, 71, 33}; 
int temp[10][10] = {0}; 
int order[10] = {0}; 
int i, j, k, n, lsd; 
int main()
{ //�D�{��
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-9.c                   =\n");
  printf("= �{���ت��G�l�ܡu�X�ֱƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("===========��J(10�ӭ�l���)==========\n"); 
    k = 0; 
    n = 1; 
  ShowData();                  //�I�s��ܭ�l���
  printf("\n"); 
  printf("\n============��X(�Ƨǫᵲ�G)=============="); 
  Radix(data,n);                 //�I�s��ƱƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
}

ShowData ()  //��ܭ�l���
{
    int i;
    printf("�Ƨǫe: "); 
    for(i = 0; i < 10; i++) 
        printf("%d ", data[i]); 
}
//��ƱƧǪk���Ƶ{��
Radix(int data[],int n)  
{   int t=1;
    while(n <= 10)
     { 
        for(i = 0; i < 10; i++) 
        { 
            lsd = ((data[i] / n) % 10); 
            temp[lsd][order[lsd]] = data[i]; 
            order[lsd]++; 
        } 
        if (t==1) 
           printf("\n�u�Ӧ�ơv���D�G"); 
        else 
           printf("\n�u�Q��ơv���D�G"); 
        for(i = 0; i < 10; i++)
         { 
            if(order[i] != 0) 
                for(j = 0; j < order[i]; j++) 
                { 
                    data[k] = temp[i][j]; 
                    printf("%d ", data[k]); 
                    k++; 
                } 
            order[i] = 0; 
        } 
        n *= 10; 
        k = 0; 
        t+=1;
    } 
  }
