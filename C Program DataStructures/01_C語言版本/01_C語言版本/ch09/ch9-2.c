main()
{
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch9-2.c                   =\n");
  printf("= �{���ت��G�`�Ƿj�M�{��1             =\n"); 
  printf("=======================================\n"); 
  printf("==============��J(��l���)===========\n");
  printf("90, 80, 40, 50, 65, 100, 10, 20\n");       
  int list[] = {90, 80, 40, 50, 65, 100, 10, 20};   
  printf("=================��X==================\n"); 
  printf("%d �b�}�C������ %d ��.\n",100,sequential_search(list, 8, 100));
  system("PAUSE");
  return(0);
}

int sequential_search(int list[], int n, int key)
{
  int i;
  for (i = 0; i < n; i++)   //�q�Y������X�@��
    if (list[i] == key)		//���}�C������ƬO�_������j�M������
      return i+1;			//�Y���ŦX���󪺸�ơA�N�Ǧ^�����
    return(-1);		    	//�Y�䤣��ŦX���󪺸�ơA�N�Ǧ^ -1
}
