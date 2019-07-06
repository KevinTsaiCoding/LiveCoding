#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define C 3
int stu[N][C];

void showSTU(int s[][C]);
void showClass(int s[][C]);
void showPerson(int s[][C]);

int main(void){
	int i,j;
	srand(time(NULL));
	for(i=0;i<N;i++){
		for(j=0;j<C;j++){
			stu[i][j]=rand()%101;
		}
	}
	showSTU(stu);
	showClass(stu);
	showPerson(stu);
	system("pause");
	return 0;	
} 
void showSTU(int s[][C]){
	printf("%8s%8s%8s%8s\n"," ","���1","���2","���3");
	int i,j;
	for(i=0;i<N;i++){
		printf("�ǥ� %d ",i+1);
		for(j=0;j<C;j++){
			printf("%8d",s[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}
void showClass(int s[][C]){
	int i,j,max,min,avg;
	for(i=0;i<C;i++){
		max=s[0][i];
		min=s[0][i];
		avg=s[0][i];
		for(j=1;j<N;j++){
			avg+=s[j][i];
			if(max<s[j][i])
				max=s[j][i];
			min=(min>s[j][i])?s[j][i]:min;
		}
		printf("��%d��\t�̰���:%d\t�̧C��:%d\t����:%.2f\n",i+1, max,min, (float)avg/N);
	}
	return ;
}
void showPerson(int s[][C]){
	int i,j,avg,max=0,who=0;
	printf("\n");
	for(i=0;i<N;i++){
		avg=0;
		for(j=0;j<C;j++){
			avg+=s[i][j];
		}
		printf("�ǥ�%d��������:%.2f\n",i+1, (float)avg/C);
		if(max<avg){
			max=avg;
			who=i+1;
		}		
	}
	printf("\n�Ĥ@�W���G�ǥ�%d\n",who);
	return ;
}











