#include <time.h> 
#define MAX 10
int A[10]={0};
int main(void) { 
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-6.c                   =\n");
  printf("= �{���ت��G�l�ܡu��n�ƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");  
  int number[MAX+1] = {-1}; 
  int i, num;  
  RandomNum();                //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  printf("\n�إ߰�n��G\n"); 
  Heapsort(A,MAX);                //�I�s��n�ƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
} 

RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL)); //�üƭȪ�l��    
  for (i = 1; i <= MAX; i++)
    {
      A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
      printf("%4d",A[i]);
    }
}

//�I�s��n�ƧǪk���Ƶ{��
Heapsort(int A[], int index)
{  int i, j,t, temp;
    t=1;
    //�N����G�����ন��n�� 
    for ( i= (index/2); i >= 1; i--)
       Createheap(A, i , index);
    for(i = 1; i <= 10; i++) 
       printf("%4d",A[i]);
    //�ְ�Ƨ�
    printf("\n=========��X(�Ƨǫᵲ�G)=============="); 
    for  ( i = index-1; i >= 1; i--)
    {
	 temp=A[i+1];          
     A[i+1]=A[1];
     A[1]=temp;
	 Createheap(A,1,i);    
     printf("\n�� %d ���ƧǡG", t++);
     for ( j=1; j <= index; j++)
	       printf("%d ", A[j] );
   }
}

//�إ߰�n�𪺰Ƶ{��
Createheap(int A[],int root, int index)
{    int i, j , temp;
     int finish;              
     j=2*root;                
     temp=A[root];            
     finish=0;                
     while ( j<= index  &&  finish==0 )
     {
     //��̤j��
	 if ( j < index )
	       if ( A[j] < A[j+1] )
              j++;
	 if ( temp >= A[j] )
	     finish=1;         
        else
        {
	     A[j/2]=A[j];      
         j=2*j;
        }
     }
     A[j/2]=temp;        
} 
