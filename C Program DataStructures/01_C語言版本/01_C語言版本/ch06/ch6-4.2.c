#define Num 20
int data[Num]={0}; 
int BinaryTree[Num]={0}; 
main( )
{
    int n,i;
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch6-4.2.c                 =\n");
    printf("= �{���ت��G�إߤ@�ӤG����e�ǰl��    =\n"); 
    printf("=======================================\n"); 
    printf("=================��J==================\n"); 
    printf("�п�J�`�I�ӥءG");
    scanf("%d",&n);
    printf("�ЦA���O��J�o %d �Ӹ`�I�����e�G\n",n);
    for (i=0;i<n;i++)
       scanf(" %d",&data[i]);
    CreateBinaryTree(data,n); //�I�s�إߤG���𤧰Ƶ{�� 
    printf("=================��X==================\n");      
    printf("�G����e�ǰl�ܪ����G�G\n");
    Preorder(1);   //�I�s�e�Ǥ��Ƶ{�� 
    printf("\n");
    system("PAUSE");
    return(0);
}

//�إߤG���𤧰Ƶ{�� 
CreateBinaryTree(int data[],int n)
 {           
    int node=1,i,j,temp;
    for (i=0;i<Num;i++)
	   BinaryTree[i]=0;  //��ȳ]�w 
    for (i=0;i<n;i++)
     {
	   BinaryTree[node]=data[i];
	   node=node+1;
       }
 }

//�i��e�Ǥ��Ƶ{�� 
Preorder(int node)
 {
  if (BinaryTree[node]!=0)
     {
	   if (BinaryTree[node]!=0)
	   printf("%d ",BinaryTree[node]);  //�C�L���
	   Preorder(2*node);               //���j���l��
	   Preorder(2*node+1);             //���j�k�l��
      }
 }
