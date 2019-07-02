main()
{ //主程式
   printf("===============程式描述=======================\n");
   printf("= 程式名稱：ch3-6.3.c                        =\n");
   printf("= 程式目的：利用遞迴求「最大公因數」之程式   =\n"); 
   printf("==============================================\n"); 
   int a=18,b=15;
   printf("a=18,b=15之"); 
   printf("最大公因數為=%2d",GCD(a, b));   //呼叫遞迴函式
   printf("\n");
   system("PAUSE");
   return(0);
}

int GCD(int a,int b)  //遞迴函式
  {
    int c;
    c = a % b;
    if (c == 0)
        return b;
    else
        return GCD(b, c);  //函式自己又可以呼叫自己
  }

