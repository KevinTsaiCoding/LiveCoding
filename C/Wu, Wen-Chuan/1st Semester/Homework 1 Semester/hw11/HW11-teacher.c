/*HW11 �Ʀr�}�C  
  �m�W�GXXX  �Ǹ�:XXX */
   
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5    //����� 
void DivideNum(int num, int A[]);
void Sort(int A[]);

int main(void){
	int N,a,b,ans=0,i,k;
	int arr[SIZE]={0};
	
	printf("��J�ƭ�:");
	scanf("%d",&N);
	while(N!=-1){
		if(N>=10000 && N<=99999){ //�ˬd��J�ƭȬO�_���b����Ƥ� 
			DivideNum(N,arr);
			printf("�R���G��:");
			scanf("%d%d",&a,&b);
			arr[a-1]=0; arr[b-1]=0;
			Sort(arr);
			
			//��ѤU���T�Ӧ�ƲզX���@�ӼƦr ��Jans �ܼƤ� 
			k=1;
			ans=0;			
			for(i=SIZE-1;i>=2;i--){
				ans+=arr[i]*k;
				k*=10;	
			}				
			printf("���G:%d\n\n",ans);
			
		}		 
		printf("��J�ƭ�:");
		scanf("%d",&N);
	}	
	system("pause");
	return 0;
} 
void DivideNum(int num, int A[]){ 
	//��ѼƦr�é�J�}�CA �� 
	int i=SIZE-1;
	while(num>0){
		A[i]=num%10;
		num=num/10;
		i--;
	}
	//printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
	//��X�ˬd�Ʀr��ѬO�_���T 
	return ;
}
void Sort(int A[]){
	//�Ʀr�}�C�i���w�Ƨ�  �q�p��j 
	int pass, i, temp;
	for(pass=1;pass<SIZE;pass++){
		for(i=0;i<SIZE-1;i++){
			if(A[i]>A[i+1]){
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
	}
	//printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
	//��X�ˬd�Ʀr�ƧǬO�_���T
	return ;
}
