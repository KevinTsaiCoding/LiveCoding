#include <time.h>
#define Num 10
int A[10]={0};
int main()   //�D�{��
{ 
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch8-3.c                   =\n");
    printf("= �{���ت��G��ܱƧǪk                =\n"); 
    printf("=======================================\n"); 
    printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");    
    RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
    printf("\n"); 
    printf("=========��X(�Ƨǫᵲ�G)==============\n");    
    SelSort(A, Num);          //�I�s��ܱƧǪk���Ƶ{��
    PrintSelSort(A, Num);     //�I�s��ܱƧǫ᪺���G���Ƶ{��
    printf("\n"); 
    system("PAUSE");
    return(0);
}

RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL)); //�üƭȪ�l��
  for (i = 1; i <= Num; i++)
    {
       A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%4d",A[i]);
    }
}

SelSort(int A[], int n)  //��ܱƧǪk���Ƶ{��
 {
   int i, j, Temp, Min = 0;
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
    }
 }
 
PrintSelSort(int A[], int n)  //��ܱƧǪk���Ƶ{�� 
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%4d",A[i]);
    }   
}

