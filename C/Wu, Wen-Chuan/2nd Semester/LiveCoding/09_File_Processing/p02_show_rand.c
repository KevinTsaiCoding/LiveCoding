#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	FILE *f1;
	f1=fopen("w01.txt","r");
	if(f1==NULL){
		printf("No such file!\n");
		exit(1);/* error code 1(no such file)*/
	}
	else{
		f1=fopen("w01.txt","w");
		int a;
		srand(time(NULL));
		a=rand()%10+1;
		fprintf(f1,"%d\n\n",a);
	}
	fclose(f1);
	system("pause");
	return 0;
}
