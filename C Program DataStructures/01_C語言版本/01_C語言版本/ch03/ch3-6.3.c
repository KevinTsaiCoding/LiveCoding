main()
{ //�D�{��
   printf("===============�{���y�z=======================\n");
   printf("= �{���W�١Gch3-6.3.c                        =\n");
   printf("= �{���ت��G�Q�λ��j�D�u�̤j���]�ơv���{��   =\n"); 
   printf("==============================================\n"); 
   int a=18,b=15;
   printf("a=18,b=15��"); 
   printf("�̤j���]�Ƭ�=%2d",GCD(a, b));   //�I�s���j�禡
   printf("\n");
   system("PAUSE");
   return(0);
}

int GCD(int a,int b)  //���j�禡
  {
    int c;
    c = a % b;
    if (c == 0)
        return b;
    else
        return GCD(b, c);  //�禡�ۤv�S�i�H�I�s�ۤv
  }

