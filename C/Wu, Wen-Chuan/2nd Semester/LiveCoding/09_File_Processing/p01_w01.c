#include<stdio.h>
#include<stdlib.h>
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
		int a,b;
		scanf("%d%d",&a,&b);
		fprintf(f1,"%d\n%d\n%d\n%.2f\n%.2f\n",a+b,a-b,a*b,(float)a/b,b%a);
	}
	fclose(f1);
	system("pause");
	return 0;
}
