#include <time.h>
#define NUM 10
int BinaryTree[NUM]={0};
main()
{
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch6-3.7.c                 =\n");
    printf("= �{���ت��G�إߤG����                =\n"); 
    printf("=======================================\n");       
    int i,BinaryTree[NUM+1];
    srand((unsigned)time(NULL));
    printf("=================��J==================\n"); 
    printf("�üƦ۰ʲ��ͤQ�ӼƭȡG\n");     
    for(i=1;i<11;i++) 
    {
       BinaryTree[i] = rand( ) % 100;
       printf("%d  ",BinaryTree[i]);
    }
    printf("\n=================��X==================\n");   
    printf("��ڪ���Ȭ� %d\n",BinaryTree[1]);
    for(i=1;i<=NUM;i++)
    {
     if(2*i <= NUM) 
       printf("�`�I %d �����l�𬰡G%d\n",BinaryTree[i],BinaryTree[2*i]);
     if(2*i < NUM)
       printf("�`�I %d ���k�l�𬰡G%d\n",BinaryTree[i],BinaryTree[2*i+1]);
    }
    system("pause");     //�ϵ{���Ȱ��b����e��
    return (0);
}

