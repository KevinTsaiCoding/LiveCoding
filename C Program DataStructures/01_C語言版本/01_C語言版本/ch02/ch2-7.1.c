main()
{
     printf("===============�{���y�z=======================\n");
     printf("= �{���W�١Gch2-7.1.c                        =\n");
     printf("= �{���ت��G�x�}��m                         =\n"); 
     printf("==============================================\n");       
     int A[4][4] ={ { 1, 2, 3, 4 }, 
                    { 5, 6, 7, 8 }, 
                    { 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16 } };
     int B[4][4];
     matrix_pretrans(4, 4, A);       //�ഫ�e 
     matrix_transpose(4, 4, A, B);   //�ഫ�Ƶ{�� 
     matrix_posttrans(4, 4, B);      //�ഫ�� 
     system("PAUSE");
     return(0);
}

//�ഫ�e 
matrix_pretrans(int m, int n, int A[m][n])
{              
     printf("�ഫ�e�G");
     printf("\n");             
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%4d ", A[i][j]);
       printf("\n");
     }
}

//�ഫ�Ƶ{��(A�x�}��m��n�নB�x�}��n��m
matrix_transpose(int m, int n, int A[m][n], int B[n][m])
{
  int i, j;
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      B[j][i] = A[i][j]; 
}

//�ഫ�� 
matrix_posttrans(int m, int n, int B[m][n])
{
     printf("�ഫ��G");
     printf("\n");                   
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%4d ", B[i][j]);
       printf("\n");
     }
}
