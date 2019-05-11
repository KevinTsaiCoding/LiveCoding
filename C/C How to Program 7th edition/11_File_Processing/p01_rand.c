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
	fclose(f1);
	system("pause");
	return 0;
}
