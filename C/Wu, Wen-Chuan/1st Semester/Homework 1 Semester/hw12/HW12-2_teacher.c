#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;
void showARR(int a[][n]);
void rotation(int a[][n]);

int main(void){
	int  d;
	printf("輸入n:");
	scanf("%d",&n);
	printf("輸入d:");
	scanf("%d",&d);
	
	int arr[n][n],i,j;
	srand(time(NULL));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr[i][j]=rand()%21;
		}
	} 
	printf("原矩陣:\n");
	showARR(arr);
	//旋轉
	for(i=1;i<=d;i++){
		rotation(arr);
		//printf("右轉%d次後:\n",i); 
		//showARR(arr);
	}	
	printf("\n旋轉後:\n"); 
	showARR(arr);
	system("pause");
	return 0;	
} 
void rotation(int a[][n]){
	int i, j, r[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			r[i][j]=a[n-1-j][i];		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=r[i][j];		
		}
	}
	return ;
}
void showARR(int a[][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	} 
	printf("\n");
	return;
}
