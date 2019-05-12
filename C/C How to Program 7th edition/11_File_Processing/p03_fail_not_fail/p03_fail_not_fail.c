#include<stdio.h>
#include<stdlib.h>
struct _profile{
	char ID[9];
	int math;
	int eng;
	int pc;
	float avg;
};
typedef struct _profile profile;
int main()
{
	profile student[4]={{"AM990001",89,84,75,0},{"AM990002",77,69,87,0},
	{"AM990003",65,68,77,0},{"AM990004",12,56,23,0}};
	FILE *f1;
	f1=fopen("show.txt","w");
	int i,sum;
	for(i=0;i<4;i++)
	{
		sum=0;
		sum=sum+student[i].math+student[i].eng+student[i].pc;
		student[i].avg=(float)sum/3;
		fprintf(f1,"%12s %-3d %-3d %-3d  %.2f\n",student[i].ID,student[i].math,
		student[i].eng,student[i].pc,student[i].avg);
	}
	fclose(f1);
	f1=fopen("show.txt","r");
	if(f1==NULL)
		printf("No File!");
	else{
		FILE *pass,*notpass;
		pass=fopen("pass.txt","w");
		notpass=fopen("notpass.txt","w");
		
		char ID[9];
		int math;
		int eng;
		int pc;
		float avg;
		
		int i=0;
		fscanf(f1,"%s%d%d%d%f",student[i].ID,&student[i].math,&student[i].eng,&student[i].pc,&student[i].avg);
		
		while(!feof(f1)){
			
			printf("%12s %-3d %-3d %-3d  %.2f\n",student[i].ID,student[i].math,
			student[i].eng,student[i].pc,student[i].avg);
			
			fscanf(f1,"%f",student[i].ID,&student[i].math,&student[i].eng,&student[i].pc,&student[i].avg);
			
			if(student[i].avg<60)
				fprintf(notpass,"%12s %-3d %-3d %-3d  %.2f\n",student[i].ID,student[i].math,
			student[i].eng,student[i].pc,student[i].avg);
			else
				fprintf(pass,"%12s %-3d %-3d %-3d  %.2f\n",student[i].ID,student[i].math,
			student[i].eng,student[i].pc,student[i].avg);	
			
			i++;
			if(i>=4)
				break;
		}
		fclose(f1);
		fclose(pass);
		fclose(notpass);
	}
	system("pause");
	return 0;
}
