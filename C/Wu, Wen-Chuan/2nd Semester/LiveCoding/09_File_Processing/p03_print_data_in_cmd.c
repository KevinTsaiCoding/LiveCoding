#include <stdio.h>
#include <stdlib.h>

int main(void){
	int score;
	char name[10];
	FILE *fptr;
	fptr=fopen("a.txt","r");
	if(fptr==NULL){
		printf("File open failed\n");
	}
	else{
		fscanf(fptr,"%s%d",name, &score);
		while(!feof(fptr)){/* file end of file */
			printf("%10s %3d\n",name,score);
			fscanf(fptr,"%s%d",name, &score);
		}
		fclose(fptr);
	}	
	system("pause");
	return 0;
}
