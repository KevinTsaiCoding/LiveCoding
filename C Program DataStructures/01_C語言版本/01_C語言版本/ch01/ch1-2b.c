#define NUM 5
main( )
{   
    printf("===============�{���y�z=======================\n");
    printf("= �{���W�١Gch1-2b.c                         =\n");
    printf("= �{���ت��G�ϥθ�Ƶ��c�P�t��k             =\n"); 
    printf("==============================================\n"); 
    float Average=0;
    int sum=0,i,Score[NUM]={60,70,80,85,90};  //�ŧi�u�}�C�v��Ƶ��c 
    for (i = 0; i<NUM;i++ )                   //�ϥ�FOR�j�骺�t��k 
       sum+=Score[i];
    Average=(float)(sum/NUM);
    printf("�������Z�G%f\n",Average);
    system("PAUSE");	
    return 0;
}
