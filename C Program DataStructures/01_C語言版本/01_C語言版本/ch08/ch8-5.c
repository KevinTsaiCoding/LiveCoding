#include <time.h>
#define MAX 10
int A[10]={0};
int main()   //�D�{��
{ 
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch8-5.c                   =\n");
  printf("= �{���ت��G�l�ܡu�ֳt�ƧǪk�v���L�{  =\n"); 
  printf("=======================================\n"); 
  printf("=================��J==================\n");
  RandomNum();              //�I�s����10�ӶüƭȪ��Ƶ{��
  printf("\n"); 
  printf("=================��X==================\n");  
  QuickSort(A, 0, MAX-1, MAX);       //�I�s�ֳt�ƧǪk���Ƶ{��
  printf("\n"); 
  system("PAUSE");
  return(0);
}

RandomNum()  //����10�ӶüƭȤ��Ƶ{��
{
  int i;
  srand((unsigned)time(NULL)); //�üƭȪ�l��
  printf("����10�ӶüƭȡG\n");   
  for (i = 0; i <= MAX-1; i++)
    {
       A[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%4d",A[i]);
    }
}

QuickSort(int A[], int left, int right,int index)
{  int lower,upper,t,k,key,temp,done;
   lower=left; 
   upper=right+1;                      
   t=1;
   key=A[left];                      
   if  ( lower < upper )
   { do
      {
	   do                              
        { lower ++;
	    } while (A[lower] <= key && lower <= right);
	   do                                
        { upper--;
	    } while (A[upper] >= key && upper > left);

	   if ( lower < upper )		     
	   {
	       temp=A[lower];
	       A[lower]=A[upper];
	       A[upper]=temp;
	    }
     }while ( lower < upper );
   if ( lower > upper)
       printf("\n"); 
       {
        temp=A[left];          
	    A[left]=A[upper];
	    A[upper]=temp;
        for (k=0;k<index;k++)
          printf("%d ",A[k]);
       }
        QuickSort(A, left, upper-1,index);   // �索��i�滼�j 
        QuickSort(A, upper+1, right,index);  // ��k��i�滼�j 
    } 
}
