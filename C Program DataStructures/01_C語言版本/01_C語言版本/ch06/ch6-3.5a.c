#define MaxNum 20   //�w�q�}�C���j�p 
main()
{   
    int data[MaxNum],n;
    int i;
    printf("===============�{���y�z================\n");
    printf("= �{���W�١Gch6-3.5a.c                =\n");
    printf("= �{���ت��G�Q���쵲��C�ӫإߤG����  =\n"); 
    printf("=======================================\n"); 
    printf("=================��J==================\n");
    printf("�п�J�`�I�ӼơG");
    scanf("%d",&n);
    printf("�ЦA���O��J�o %d �Ӹ`�I�����e�G\n",n);
    for (i=0;i<n;i++)
       scanf(" %d",&data[i]); 
    printf("=================��X==================\n");
    BinaryTree_List(data,n);   //�I�s�G����Q���쵲��C���x�s
    system("PAUSE");
    return(0);
}
 //�G����Q���쵲��C���x�s���Ƶ{�� 
BinaryTree_List(int data[],int n)
 {
    int tree[MaxNum],t;
    int node=0,i,temp,left_node,right_node;
    for (i=0;i<20;i++)
	   tree[i]=0;    //��ȳ]�w��0 
    tree[1]=data[0];  //�]�w��ڪ��� 
    temp=n;   //�`�I�Ӽ�
    for (i=1;i<n;i++)
    {
	node=1;
	while(tree[node]!=0)
	     {
	      if (data[i]>tree[node])   //�j���ڪ���� 
	        node=2*node+1;          //���k�l�� 
	     else                      //�p���ڪ����
	        node=2*node;           //��쥪�l�� 
	      if (temp<node)
		 {
		  temp=node;
		  t=temp;
		 }
	     }
	  tree[node]=data[i];
    }
    printf("�G����Q���쵲��C���x�s�覡�G\n");
    printf("�`�I�@���`�I�@�`�I����ȡ@�k�`�I\n");
    for (i=1;i<=t;i++)
	{
	left_node=2*i;
	right_node=2*i+1;
	if (tree[left_node]==0)
	   left_node=0;
	if (tree[right_node]==0)
	   right_node=0;
	if (tree[i]!=0)
	   printf("[%d]       %d        %d       %d\n",i,left_node,tree[i],right_node);
   	}
 }
