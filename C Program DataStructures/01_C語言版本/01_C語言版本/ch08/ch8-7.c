#include <time.h> 
#define MAX 10
int A[10]={0};
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int main(void) 
{ 
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-7.c                   =\n");
  printf("= �{���ت��G�l�ܡu�¦ձƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=======��J(�۰ʲ���10�Ӷüƭ�)========\n");      
  RandomNum();                //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n=========��X(�Ƨǫᵲ�G)==============");     
  Shellsort(A);               //�I�s�¦ձƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
} 
RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL));   //�üƭȪ�l��
  for (i = 0; i < MAX; i++)
    {
       A[i] = rand() % 90+10;    //����10~100����ƶüƭ�
       printf("%3d",A[i]);
    }
}
 //�¦ձƧǪk���Ƶ{��
Shellsort(int A[]) 
{ 
    int i, j, k, Gap, t; 
    Gap = MAX / 2; 
    while(Gap > 0)
     { 
        for(k = 0; k < Gap; k++) 
        { 
            for(i = k+Gap; i < MAX; i+=Gap) 
            { 
                for(j = i - Gap; j >= k; j-=Gap) 
                { 
                    if(A[j] > A[j+Gap]) 
                    { 
                        SWAP(A[j], A[j+Gap]); 
                    } 
                    else 
                        break; 
                } 
            } 
        } 
        printf("\nGap = %d�G", Gap); 
        for(i = 0; i < MAX; i++) 
            printf("%d ", A[i]); 
        Gap /= 2; 
    } 
}
