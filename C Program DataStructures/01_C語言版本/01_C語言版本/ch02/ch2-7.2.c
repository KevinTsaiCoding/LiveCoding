main()
{
     printf("===============�{���y�z=======================\n");
     printf("= �{���W�١Gch2-7.2.c                        =\n");
     printf("= �{���ت��G2�ӯx�}�ۥ[                      =\n"); 
     printf("==============================================\n");       
     int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int B[2][3] = {{11, 12, 13}, {14, 15, 16}};
     int C[2][3];
     //��ӯx�}�ۥ[ 
     printf("==================��J========================\n");       
     matrix_Aprint(2,3,A);         //��XA�x�}
     matrix_Bprint(2,3,B);         //��XB�x�}  
     matrix_Add(2, 3, A, B, C);     //C=A+B
     printf("==================��X========================\n");    
     matrix_Cprint(2, 3, C);        //��Xc�x�} 
     system("PAUSE");
     return(0);
}

//��XA�x�}
matrix_Aprint(int m, int n, int A[m][n])
{
     printf("��XA�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", A[i][j]);
       printf("\n");
     }  
       printf("\n");
}

//��XB�x�}
matrix_Bprint(int m, int n, int B[m][n])
{
     printf("��XB�x�}�G");
     printf("\n");                     
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", B[i][j]);
       printf("\n");
     }
       printf("\n");     
}

/*���]A,B,C����mxn�}�C�A�o�Ө�ƭn�D�XC=A+B*/
matrix_Add(int m, int n, int A[m][n], int B[m][n], int C[m][n])
{
  int i, j;
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      C[i][j] = A[i][j] + B[i][j];  
}

//��X�ۥ[���G
matrix_Cprint(int m, int n, int C[m][n])
{
     printf("��XA+B=C�����G�G");
     printf("\n");             
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++)
         printf("%3d ", C[i][j]);
       printf("\n");
     }
}
