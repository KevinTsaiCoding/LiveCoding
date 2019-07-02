#include <stdlib.h>
void Enqueue(int);       //�ŧiEnqueue�Ƶ{��
int Dequeue(void);       //�ŧiDequeue�Ƶ{��
void PrintQueue(void);   //�ŧi�C�L�ثe��C�����e���Ƶ{��
typedef struct node {
  int data;
  struct node *prev;
  struct node *link;
} NODE;
int flag;
NODE *front=NULL;
NODE *rear=NULL;
int main(void)
{
    printf("===============�{���y�z=======================\n");
    printf("= �{���W�١Gch5-6.2.c                        =\n");
    printf("= �{���ت��G�ϥΦ�C�e�{��C                 =\n"); 
    printf("==============================================\n");   
  int op=0,item;
  while(1)
  {
    printf("==============================================\n");
    printf("=   1.enqueue(�[�J)                          =\n");
    printf("=   2.dequeue(�R��)                          =\n");
    printf("=   3.��ܥثe��C�����e                     =\n");
    printf("=   4.����                                   =\n");    
    printf("==============================================\n");
    printf("�п�J�A���ާ@�G");
    scanf("%d",&op);
    switch(op)
    {
      case 1: printf("�п�J�A�n�[�J�����:");
              scanf("%d",&item);
              Enqueue(item);      //�I�senqueue�Ƶ{��
              break;
      case 2: item = Dequeue( );  //�I�sdequeue�Ƶ{��
              printf("%d �O�q��C�R�������\n",item);
              break;
      case 3: PrintQueue( );  //�I�s�C�L��C���Ƶ{�� 
              break;
      case 4: printf("\n");       //����
              return (0);              
    }
  }
  system("pause");     //�ϵ{���Ȱ��b����e��
  return (0);
}

//��ƥ[�J��C
void Enqueue(int data)    //enqueue�Ƶ{��
{
  NODE *pt;
  if((pt = (NODE*)malloc(sizeof(NODE))) == NULL) {
    printf("�O���餣���I");
    exit(1);
  }
  if(front == NULL && rear == NULL)
    rear = pt;
  if(front != NULL) { 
    front->prev = pt;
  }    
  pt->prev = NULL;
  pt->data = data;
  pt->link = front;
  front = pt;
}

//��Ʊq��C�R�� 
int Dequeue(void)     //dequeue�Ƶ{��
{
  int pt=rear->data;
  if(flag == 1) {
    printf("��C�O�Ū�!\n");
    exit(1);
  } else { 
    if(front == rear) {
      flag = 1;
      free(rear);
      return pt;
    }  
    rear = rear->prev;
    free(rear->link);
    rear->link = NULL;
    return pt;
  }
}
//�C�L�ثe��C�����e
void PrintQueue(void)   //�C�L��C���Ƶ{��
{
  NODE *pt=front;   
  printf("�ثe��C�����e�G");
  while(pt) {
    printf("%d ",pt->data);
    pt = pt->link;
  }
  printf("\n");
}
