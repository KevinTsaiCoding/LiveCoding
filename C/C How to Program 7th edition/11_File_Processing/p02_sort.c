#include<stdio.h>
#include<time.h>
int main()
{
	FILE *f1;
	int n[10];
	f1=fopen("rand.txt","w");
	srand(time(NULL));
	int i;
	for(i=0;i<10;i++){
		n[i]=rand()%46+1;
		fprintf(f1,"%d ",n[i]);
		fscanf(f1,"%d",&n[i]);
		printf("%d ",n[i]);
	}
  
	puts("");
	int j;
	for(j=0;j<10;j++){
		for(i=0;i<9;i++){
			if(n[i]>n[i+1]){
				int temp;
				temp=n[i];
				n[i]=n[i+1];
				n[i+1]=temp;
			}
		}
	}
  fclose(f1);
	
  f1=fopen("rand.txt","w");
	for(i=0;i<10;i++){
		fprintf(f1,"%d ",n[i]);
		fscanf(f1,"%d",&n[i]);
		printf("%d ",n[i]);
	}
	puts("");
	fclose(f1);
  
	system("pause");
	return 0;
}
