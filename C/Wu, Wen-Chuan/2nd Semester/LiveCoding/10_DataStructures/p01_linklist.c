#include<stdio.h>
#include<stdlib.h>
struct _node{
	int data;
	struct _node *next;
};
typedef struct _node node;
int main()
{
	node *head,*ptr;
	head=(node*)malloc(sizeof(node)*1);
	ptr=head;
	int val;
	scanf("%d",&val);
	ptr->data=val;
	ptr->next=(node*)malloc(sizeof(node)*1);
	ptr=ptr->next;
	scanf("%d",&val);
	ptr->data=val;
	ptr->next=NULL;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	puts("");
	system("pause");
	return 0;
}
