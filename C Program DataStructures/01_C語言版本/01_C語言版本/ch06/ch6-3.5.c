#define MaxNum 10   //�w�q�}�C���j�p 
main()
{   
    int data[MaxNum],n;
    int i;
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch6-3.5.c                 =\n");
    printf("= �{���ت��G�Q�Τ@���}�C�ӫإߤG����  =\n"); 
    printf("=======================================\n"); 
    printf("=================��J==================\n");
    printf("�п�J�`�I�ӼơG");
    scanf("%d",&n);
    printf("�ЦA���O��J�o %d �Ӹ`�I�����e�G\n",n);
    for (i=0;i<n;i++)
       scanf(" %d",&data[i]); 
    printf("=================��X==================\n");
    BinaryTree_Array(data,n);  //�I�s�G����Q�Τ@�Ӥ@���}�C���x�s
    system("PAUSE");
    return(0);

}
 
//�G����Q�Τ@�Ӥ@���}�C���x�s���Ƶ{�� 
BinaryTree_Array(int data[], int n)
{
    int tree[MaxNum],t;                        
    int node=0,i,temp;
    for (i=0;i<10;i++)
	   tree[i]=0;
    tree[1]=data[0];//�]�w��ڪ��� 
    temp=n;
    for (i=1;i<n;i++)
     {
      node=1;
      while(tree[node]!=0)
	  {
	   if (data[i]>tree[node])  //�j���ڪ���� 
	     node=2*node+1;         //���k�l�� 
	   else                    //�p���ڪ����
	     node=2*node;          //��쥪�l�� 
	   if (temp<node)
		 {
		  temp=node;
		  t=temp;
		 }
	   }
	  tree[node]=data[i];
    }
    printf("�G�����x�s�b�@���}�C�����G�G\n");
    for (i=1;i<=t;i++)
	printf("%d  ",tree[i]);
    printf("\n");
}
