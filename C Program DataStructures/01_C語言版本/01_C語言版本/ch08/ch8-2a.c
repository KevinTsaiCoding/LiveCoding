#include <time.h>
#define Num 10
int A[10]={0};
int main()
{ //�D�{��
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-2a.c                  =\n");
  printf("= �{���ت��G�l�ܡu��w�ƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=================��J==================\n");
  RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  printf("=================��X================================\n");  
  BubSort(A, Num);            //�I�s��w�ƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
}

RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL)); //�üƭȪ�l��
  printf("����10�ӶüƭȡG\n");
  for (i = 0; i <= Num-1; i++)
    {
       A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%4d",A[i]);
    }
}

BubSort(int A[], int n)  //��w�ƧǪk���Ƶ{��
  {
    int i, j , k,t, Temp;
    t = 0;
    for (i =n-1; i>0; i--)
       {
       for (j =0; j <=i-1; j++)
          if (A[j] > A[j+1])
             {
               Temp = A[j];
               A[j] = A[j+1];
               A[j+1] = Temp;
             }
        t = t + 1;     
        printf("�� %d ���ƧǡG", t); 
        for(k = 0; k <= n-1; k++) 
         {
           if(k == (n - t - 1))
              printf("%d [", A[k]); 
           else if(k == n - 1)
              printf("%d]", A[k]); 
           else
              printf("%d  ", A[k]);    
         }
        printf("\n");             
       }
  }
