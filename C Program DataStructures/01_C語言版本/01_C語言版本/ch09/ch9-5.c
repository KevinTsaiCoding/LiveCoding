#define MAX 10
int A[MAX]={0};
int main(void) { 
    int  A[MAX] = {0,1,2,3,4,5,6,7,8,9}; 
    int i, find; 
   printf("===============�{���y�z================\n");
   printf("= �{���W�١Gch9-5.c                   =\n");
   printf("= �{���ت��G�����j�M�k                =\n"); 
   printf("=======================================\n"); 
   printf("===========��J(�w���Ƨ�)==============\n");
   for(i = 0; i < MAX; i++) 
        printf("%d ", A[i]); 
    printf("\n�п�J�Ʀr(0~9)�G"); 
    scanf("%d", &find); 
   printf("================��X===================\n");     
    if((i = intsrch(A, find)) >= 0) 
        printf("�ӼƦr�O�Ʀb�� %d�Ӷ��� ", i+1); 
    else 
        printf("\n�䤣��!"); 
    
    printf("\n"); 
    system("PAUSE");
    return 0; 
} 
//�����j�M�k
int intsrch(int A[], int find) { 
    int low, mid, high; 

    low = 0; 
    high = MAX - 1; 

    while(low <= high) { 
        mid = low+ (find-A[low])/(A[high]-A[low])*(high-low); 
        if(mid < low || mid > high) 
            return -1; 
        if(find < A[mid]) 
            high = mid - 1; 
        else if(find > A[mid]) 
            low = mid + 1; 
        else 
            return mid; 
     } 
     return -1;
} 
