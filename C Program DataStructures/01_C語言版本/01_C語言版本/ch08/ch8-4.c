#include <time.h>
#define Num 10
int A[10]={0};
int main()   //�D�{��
{ 
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch8-4.c                   =\n");
    printf("= �{���ت��G���J�ƧǪk                =\n"); 
    printf("=======================================\n"); 
    printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");      
    RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
    printf("\n"); 
    printf("=========��X(�Ƨǫᵲ�G)==============\n");  
    InSort(A, Num);          //�I�s���J�ƧǪk���Ƶ{��
    PrintInSort(A, Num);     //�I�s���J�Ƨǫ᪺���G���Ƶ{��
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

InSort(int A[], int n)  //���J�ƧǪk���Ƶ{��
 {
   int i, j, Temp;
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
    }
 }
 
PrintInSort(int A[], int n)  //���J�ƧǪk���Ƶ{�� 
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%4d",A[i]);
    }   
}

