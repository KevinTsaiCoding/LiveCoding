main()
{ //�D�{��
  int list[10];
  int i,n,c,key;
  printf("===============�{���y�z================\n");
  printf("= �{���W�١Gch9-2a.c                  =\n");
  printf("= �{���ت��G�`�Ƿj�M�{��2             =\n"); 
  printf("=======================================\n"); 
  printf("========��J(�۰ʲ���10�Ӹ��)===========\n");
  for (i = 1; i <= 10; i++)
    {
       list[i] = rand() % 90+10;  //����10~100����ƶüƭ�
       printf("%4d",list[i]);
    }
  printf("\n");
  printf("=================��X====================\n"); 
  printf("%d �b�}�C������ %d ��.\n",28,sequential_search(list, 10, 28));
  system("PAUSE");
  return(0);

}    

int sequential_search(int list[], int n, int key)
{
  int i;
  for (i = 1; i <= n; i++)
    if (list[i] == key) 	/* ���}�C������ƬO�_������j�M������ */
      return i;			    /* �Y���ŦX���󪺸�ơA�N�Ǧ^����� */
    return(-1);		        /* �Y�䤣��ŦX���󪺸�ơA�N�Ǧ^ -1 */
}
