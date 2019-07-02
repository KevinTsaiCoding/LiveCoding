#include <time.h> 
#define MAX1 10 
#define MAX2 10 
int A[10]={0};
int B[10]={0};
int C[20]={0};
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int main(void) 
{ 
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-8.c                   =\n");
  printf("= �{���ت��G�l�ܡu�X�ֱƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");     
  RandomNum();                //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  Quicksort(A, 0, MAX1-1);    //�Ĥ@�ո�ƱƧ� 
  Quicksort(B, 0, MAX2-1);    //�ĤG�ո�ƱƧ�
  PrintQuicksort(A,B);        //�C�L�X�Ĥ@�P�G�ո�ƱƧǵ��G 
  printf("\n"); 
  Mergesort(A,MAX1,B,MAX2,C); //�i��X�ֱƧ� 
  printf("\n"); 
  PrintMergesort(C);          //��ܦX�ֱƧǤ����G 
  printf("\n"); 
  system("PAUSE");
  return(0);
} 
RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL));   //�üƭȪ�l��
  printf("����10�ӶüƭȡG\n"); 
  printf("�Ĥ@�ո�ơG");
  for (i = 0; i < MAX1; i++)
    {
       A[i] = rand() % 40+10;    //����10~50����ƶüƭ�
       printf("%3d",A[i]);
    }
  printf("\n"); 
   printf("�ĤG�ո�ơG");
  for (i = 0; i < MAX2; i++)
    {
       B[i] = rand() % 50+51;    //����51~100����ƶüƭ�
       printf("%3d",B[i]);
    }   
}

Quicksort(int A[], int left, int right)
 { 
    int q; 
    if(left < right) 
    { 
        q = partition(A, left, right); 
        Quicksort(A, left, q-1); 
        Quicksort(A, q+1, right); 
    } 
} 
//���Τ��Ƶ{�� 
partition(int A[], int left, int right) { 
    int i, j, s; 
    s = A[right]; 
    i = left - 1; 
    for(j = left; j < right; j++) { 
        if(A[j] <= s) { 
            i++; 
            SWAP(A[i], A[j]); 
        } 
    } 
    SWAP(A[i+1], A[right]); 
    return i+1; 
} 

//�ֳt�ƧǪk���Ƶ{�� 
PrintQuicksort(int A[], int n)  
 {
    int i;
    printf("\n=========��X(�Ƨǫᵲ�G)==============");  
    printf("\n�Ĥ@�ո�ơG"); 
    for(i = 0; i < MAX1; i++) 
        printf("%d ", A[i]); 
    printf("\n�ĤG�ո�ơG"); 
    for(i = 0; i < MAX2; i++) 
        printf("%d ", B[i]); 
}
//�i��X�ֱƧ�
Mergesort(int A[], int M, int B[],int N, int C[])
 { 
    int i = 0, j = 0, k = 0; 
    while(i < M && j < N) 
    { 
        if(A[i] <= B[j]) 
            C[k++] = A[i++]; 
        else 
            C[k++] = B[j++]; 
    } 
    while(i < M) 
        C[k++] = A[i++]; 
    while(j < N) 
        C[k++] = B[j++]; 
}
//��ܦX�ֱƧǤ����G
PrintMergesort(int C[])  //�X�֫ᤧ�Ƶ{�� 
 {
    int i;
    printf("�X�֫�G\n"); 
    for(i = 0; i < MAX1+MAX2; i++) 
        printf("%d ", C[i]); 

}
