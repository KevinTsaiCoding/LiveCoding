main()
{
  printf("===============�{���y�z=======================\n");
  printf("= �{���W�١Gch2-7.c                          =\n");
  printf("= �{���ت��G�L�X�x�}�����Ҧ�����             =\n"); 
  printf("==============================================\n");       
  int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
  matrix_traverse(2, 3, A);
  system("PAUSE");
  return(0);
}

//���]A��2x3�}�C�A�L�X�G���}�C���Ҧ���������
matrix_traverse(int m, int n, int A[m][n])
{
     int i, j;
     for(i = 0; i < m; i++)
     {
       for(j = 0; j < n; j++)
         printf("%d ", A[i][j]);
       printf("\n");
     }
}
