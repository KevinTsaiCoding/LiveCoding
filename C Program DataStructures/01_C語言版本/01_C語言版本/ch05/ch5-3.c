main()
{
  printf("===============�{���y�z=======================\n");
  printf("= �{���W�١Gch5-3.c                          =\n");
  printf("= �{���ت��G�ʺA�O����t�m������O����       =\n"); 
  printf("==============================================\n");     
  int *pt;         //�ŧi�@�Ӿ�ƪ�����p
  // �t�m�O���鵹pt�A��pt�����@�Ӿ�ư}�C
  printf("�ʺA�O����t�m:\n");
  pt = (int *) malloc(sizeof(int));
  if(pt==0) //�t�m�O���饢��
    return;
  pt[0] = 20; 
  pt[1] = 30; 
  pt[2] = 40;
  int i;
  for(i=0;i<3;i++) 
    printf("pt[%d]=%2d\n",i,pt[i]);
  printf("free������O����G\n");   
 // system("pause");
  for(i=0;i<3;i++) 
     free(pt++); // ����O����
  for(i=0;i<3;i++) 
    printf("pt[%d]=%2d\n",i,pt[i]);
  system("pause");
}
