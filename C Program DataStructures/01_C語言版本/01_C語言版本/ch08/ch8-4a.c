#include <time.h>
#define Num 10
int A[10]={0};
int main()
{ //�D�{��
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-4a.c                  =\n");
  printf("= �{���ت��G�l�ܡu���J�ƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=================��J==================\n");
  RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  printf("=================��X================================\n");   
  InSort(A, Num);            //�I�s���J�ƧǪk���Ƶ{��
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

InSort(int A[], int n)  //���J�ƧǪk���Ƶ{��
  {
     int i, j, k, Temp;
     for (i = 1; i <= n; i++)
      {
        Temp=A[i];
        j=i-1;
        while (Temp<A[j])
         {
           A[j+1]=A[j];
           j--;
           if(j==-1)
             break;
         }
        A[j+1]=Temp;            
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
