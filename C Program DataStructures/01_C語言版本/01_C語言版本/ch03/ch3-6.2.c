main()
{ //�D�{��
   printf("===============�{���y�z=======================\n");
   printf("= �{���W�١Gch3-6.2.c                        =\n");
   printf("= �{���ت��G�p��Fibonacci(�O���)            =\n"); 
   printf("==============================================\n"); 
   int N = 6,Sum;
   Sum = Fib(N);                //�I�s���j�禡
   printf("N=6�ɪ��O��� ");  
   printf("Sum=%2d",Sum);  
   printf("\n");  
   system("PAUSE");
   return(0);
}

int Fib(int N)  //���j�禡�W��
  {
   if (N <= 2)
     return 1;
   else
     return Fib(N-1) + Fib(N - 2); //�禡�ۤv�S�i�H�I�s�ۤv
}
