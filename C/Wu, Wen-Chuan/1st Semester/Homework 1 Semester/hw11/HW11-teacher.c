/*HW11 數字陣列  
  姓名：XXX  學號:XXX */
   
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5    //五位數 
void DivideNum(int num, int A[]);
void Sort(int A[]);

int main(void){
	int N,a,b,ans=0,i,k;
	int arr[SIZE]={0};
	
	printf("輸入數值:");
	scanf("%d",&N);
	while(N!=-1){
		if(N>=10000 && N<=99999){ //檢查輸入數值是否落在五位數中 
			DivideNum(N,arr);
			printf("刪除二數:");
			scanf("%d%d",&a,&b);
			arr[a-1]=0; arr[b-1]=0;
			Sort(arr);
			
			//把剩下的三個位數組合成一個數字 放入ans 變數中 
			k=1;
			ans=0;			
			for(i=SIZE-1;i>=2;i--){
				ans+=arr[i]*k;
				k*=10;	
			}				
			printf("結果:%d\n\n",ans);
			
		}		 
		printf("輸入數值:");
		scanf("%d",&N);
	}	
	system("pause");
	return 0;
} 
void DivideNum(int num, int A[]){ 
	//拆解數字並放入陣列A 中 
	int i=SIZE-1;
	while(num>0){
		A[i]=num%10;
		num=num/10;
		i--;
	}
	//printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
	//輸出檢查數字拆解是否正確 
	return ;
}
void Sort(int A[]){
	//數字陣列進行氣泡排序  從小到大 
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
	//輸出檢查數字排序是否正確
	return ;
}
