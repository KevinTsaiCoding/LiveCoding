#include <stdio.h> 
#include <stdlib.h> 
int main()
{ //�D�{��
   int Temp[]={1,8,15,24,33,45,76,88,99};
   int Key;
   int Low, High, Middle, Searchtime;
   printf("===============�{���y�z================\n");
   printf("= �{���W�١Gch9-3.c                   =\n");
   printf("= �{���ت��G�G���k�j�M                =\n"); 
   printf("=======================================\n"); 
   printf("===========��J(�w���Ƨ�)==============\n");
   printf("1, 8, 15, 24, 33, 45, 76, 88, 99\n");
   printf("\n"); 
   printf("�п�J�H�W�����@�ռƦr�G");
   scanf("%d", &Key); 
   Low = 0;                                   //�]�w�Ĥ@�Ӧr��
   High = 8;                                  //�]�w�̫�@�Ӧr��
   Searchtime = 0;                            //�j�M���ƪ�ȳ]�w��
   Middle = (int)((Low + High)/2);            //�j�M������
   printf("================��X===================\n"); 
   do
    {
      Searchtime = Searchtime + 1;
      if (Temp[Middle] == Key)              //�����
        {
          printf("�ӼƦr�O�Ʀb�� %d �Ӷ���",Middle);      //��ܸ�Ʀ�m
          printf("�@�@�j�M %d ��",Searchtime);            //��ܷj�M����
         break;                               //���X�j��
        }
      else if(Temp[Middle] < Key) 
        Low = Middle + 1;                     //���ܥ��b��
      else 
        High = Middle - 1;                    //���ܥk�b��
        Middle = (int)((Low + High) / 2);     //���ܤ�����
    }
    while(Low <= High);
    printf("\n"); 
    system("PAUSE");
    return(0);
}
