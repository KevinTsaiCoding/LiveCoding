#define N 3
#define M 5
main(void) 
{ 
  printf("===============�{���y�z=======================\n");
  printf("= �{���W�١Gch2-5.2.c                        =\n");
  printf("= �{���ت��G�h���x�}��@���x�}(�H�欰�D)     =\n"); 
  printf("==============================================\n");             
  int Array_Data1[N][M] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11,12,13,14,15}};
  int Array_Data2[N*M] = {0}; 
  int row, column, i;
  printf("==================��J========================\n"); 
  printf("�G����Ƥ���l��ơG\n");
  for(row = 0; row < N; row++)
   {
     for(column = 0; column < M; column++) 
         printf("%4d", Array_Data1[row][column]); 
     printf("\n"); 
   } 
   //�B�z
   for(row = 0; row < N; row++) 
   {  
      for(column = 0;column < M; column++)
       {  
         i = row + column * N;   
         Array_Data2[i] = Array_Data1[row][column]; 
       }  
    }  
  printf("==================��X========================\n");  
  printf("�H�欰�D�G");   
  for(i = 0; i < N*M; i++)    
     printf("%d ", Array_Data2[i]);  
   printf("\n");   
   system("PAUSE");
   return(0);        
}
