#include <time.h>
#define Num 10
int A[10]={0};
int main()
{ //�D�{��
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-3a.c                  =\n");
  printf("= �{���ت��G�l�ܡu��ܱƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=================��J==================\n");
  RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  printf("=================��X================================\n"); 
  SelSort(A, Num);            //�I�s��ܱƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
}

RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL)); //�üƭȪ�l��
  printf("����10�ӶüƭȡG\n");
  for (i = 1; i <= Num; i++)
    {
       A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%4d",A[i]);
    }
}

SelSort(int A[], int n)  //��ܱƧǪk���Ƶ{��
  {
 int i, j, k,Temp, Min = 0;
       for (i = 1; i <= n - 1; i++)
        {
         Min = i;
         for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
          {//�۾F��Ӫ���ƥ洫��m
            Temp = A[i];
            A[i] = A[Min];
            A[Min] = Temp;
          }
        printf("�� %d ���ƧǡG", i); 
        for(k = 1; k <= n; k++) 
         {
           if(k == 1)
             if(i==1)
                printf("[%d]", A[k]); 
             else
                printf("[%d ", A[k]); 
           else if(k == i)
              printf("%d] ", A[k]); 
           else
              printf("%d  ", A[k]);    
         }         
        printf("\n");             
       }
  }
