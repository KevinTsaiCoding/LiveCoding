main()
{ //�D�{��
   printf("===============�{���y�z=======================\n");
   printf("= �{���W�١Gch3-6.1.c                        =\n");
   printf("= �{���ت��G�p�⻼�j��ƩI�s10!              =\n"); 
   printf("==============================================\n"); 
   int Sum, Max = 10;
   Sum = fact(Max);                //�I�s���j�禡
   printf("10!=1*2*...*10=%3d",Sum);  
   printf("\n"); 
   system("PAUSE");
   return(0);
}

int fact(int N)  //���j�禡�W��
 {
   if (N ==1)
     return 1;
   else
     return N * fact(N - 1); //�禡�ۤv�S�i�H�I�s�ۤv
 }
