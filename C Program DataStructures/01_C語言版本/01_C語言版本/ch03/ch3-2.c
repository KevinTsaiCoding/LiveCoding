#define MaxNum 5           //�w�q���|�j�p
int Stack[MaxNum];         //�H�}�CStack��@���|
int Top = -1;  //Top�����ثe���|���ݪ����ޭȡA��l�ȳ]��-1��ܰ��|����
void Push(int);            //�ŧiPush(�[�J)�Ƶ{�� 
int Pop(void);             //�ŧiPop(���X)�Ƶ{�� 
void PrintStack(void);     //�ŧi�C�L�ثe���|�����e���Ƶ{�� 
int main(void)             //�D�{�� 
{
   int op=0,item;   
    printf("===============�{���y�z=======================\n");
    printf("= �{���W�١Gch3-2.c                          =\n");
    printf("= �{���ت��G�ϥΰ��|�i��push�H��pop          =\n"); 
    printf("==============================================\n");    
  while(1)
  {
    printf("==============================================\n");
    printf("=   1.push(�[�J)                             =\n");
    printf("=   2.pop(���X)                              =\n");
    printf("=   3.��ܥثeStack�����e(�q�ѤW�ӤUTop-Down)=\n");
    printf("=   4.����                                   =\n");    
    printf("==============================================\n");
    printf("�п�J�A���ާ@�G");
    scanf("%d",&op);
    switch(op)
    {
      case 1: printf("�п�J�A�npush(�[�J)����ơG");
              scanf("%d",&item);
              Push(item);     //�I�sPush�Ƶ{�� 
              break;
      case 2: printf("%d �O�q���|�upop(���X)�����\n",Pop( )); //�I�sPop�Ƶ{�� 
              break;
      case 3: PrintStack( );  //��ܥثeStack�����e 
              break;
      case 4: printf("\n");    //����
              return (0);            
    }
  }
  system("pause");     //�ϵ{���Ȱ��b����e��
  return (0);
}

//�N��ƥ[�J���|
void Push(int item)    //Push(�[�J)�Ƶ{�� 
{
  if(Top == MaxNum -1)
    printf("���|�O����!");
  else
    Stack[++Top] = item;
}

//���X���|���
int Pop(void)         //Pop(���X)�Ƶ{��
{
  if(Top == -1) 
    printf("���|�O�Ū�!");
  else
    return Stack[Top--];
}

//�C�L�ثe���|�����e
void PrintStack(void)    //�C�L���|���Ƶ{��
{
  int i;
  if(Top == -1) 
    printf("���|�O�Ū�!\n");
  else 
  {
    printf("�ثe���|�����e��: ");
    for(i=Top;i>=0;i--)
      printf("%d ",Stack[i]);
    printf("\n");
  }
}
