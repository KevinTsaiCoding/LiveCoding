main()
{  
 printf("===============程式描述=======================\n");
 printf("= 程式名稱：ch2-3a.c                         =\n");
 printf("= 程式目的：計算出「每一位學生」平均成績     =\n"); 
 printf("==============================================\n"); 
 //宣告及初值設定       
 int i,j;
 int Sum[4];  
 int Score[4][5] = {{ 65, 85, 78, 75, 69 }, { 66, 55, 52, 92, 47 }, { 75, 99, 63, 73, 86 }, { 77, 88, 99, 91, 100 } };
 //處理
 for (i = 0; i <=3; i++)                 //控制列數
  Sum[i] = 0;   //先將Sum陣列歸0 
  for (i = 0; i <=3; i++)                //控制列數
    for (j = 0; j <=4; j++)              //控制行數
       Sum[i] = Sum[i] + Score[i][j];    //計算出每一位同學的總成績
 //輸出
 for (i = 0; i <= 3; i++)   
   {        
    printf("第%d位同學的平均成績=%d",i+1,Sum[i]/5);  //計算出每一位同學的平均成績
    printf("\n");
   }
   system("PAUSE");
   return(0);
}








