Towers(int n, char from, char through, char to)
{
  if (n > 0){
    Towers (n - 1, from, to, through);
    printf("�N�L�l%d�q�W�l%c����W�l%c\n", n, from, to);
    Towers (n - 1, through, from, to);
  }
}

main()
{  int n;
   printf("===============�{���y�z=======================\n");
   printf("= �{���W�١Gch3-6.4.c                        =\n");
   printf("= �{���ت��G�p��e������D                   =\n"); 
   printf("==============================================\n"); 
   printf("===================��J=======================\n"); 
   printf("�п�J�L�l�Ӽ�n�G");  
   scanf("%d",&n);     
   printf("===================��X=======================\n");   
   Towers (n,'A','B','C');
   printf("\n");  
   system("PAUSE");
   return(0);
}



