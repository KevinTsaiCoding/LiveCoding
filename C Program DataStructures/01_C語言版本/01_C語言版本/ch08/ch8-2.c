#include <time.h>
#define Num 10
int A[10]={0};
main()
{ //�D�{��
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch8-2.c                   =\n");
    printf("= �{���ت��G��w�ƧǪk                =\n"); 
    printf("=======================================\n"); 
    printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");
    RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
    printf("\n"); 
    printf("=========��X(�Ƨǫᵲ�G)==============\n");
    BubSort(A, Num);          //�I�s��w�ƧǪk���Ƶ{��
    PrintBubSort(A, Num);     //�I�s�Ƨǫ᪺���G���Ƶ{��
    printf("\n"); 
    system("PAUSE");
    return(0);
}

RandomNum()  //��w�ƧǪk���Ƶ{��
{
  int i;
  srand((unsigned)time(NULL));
  for (i = 1; i <= Num; i++)
    {
       A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%3d",A[i]);
    }
}


BubSort(int A[], int n)  //��w�ƧǪk���Ƶ{��
  {
    int i, j , k,t=1, Temp;
    for (i=n-1; i>0; i--)
       {
       for (j =0; j <=i; j++)
          if (A[j] > A[j+1])
             {  //��ƥ洫��m
               Temp = A[j];
               A[j] = A[j+1];
               A[j+1] = Temp;
             }          
       }
  }
  
PrintBubSort(int A[], int n)  //��w�ƧǪk���Ƶ{�� 
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%3d",A[i]);
    }   
}
