#include <stdio.h>
#include <stdlib.h>

int main(void){
	int score;
	char name[10];
	FILE *fptr;
	fptr=fopen("a.txt","a");
	if(fptr==NULL){
		printf("File open failed\n");
	}
	else{
		printf("?");
		scanf("%s%d",name, &score);
		while(!feof(stdin)){/* file end of file */
			fprintf(fptr,"%10s %3d\n",name,score);
			printf("?");
			scanf("%s%d",name, &score);
		}
		fclose(fptr);
	}	
	system("pause");
	return 0;
}
