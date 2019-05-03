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
		int i=1,time=2;
		while(i<=time){
				f1=fopen("w01.txt","a");/* Append */
			int a,b;
			scanf("%d%d",&a,&b);
			fprintf(f1,"%d\n%d\n%d\n%.2f\n%.2f\n\n",a+b,a-b,a*b,(float)a/b,b%a);
			i++;
		}
	
	}
	fclose(f1);
	system("pause");
	return 0;
}
