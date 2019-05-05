#include<stdio.h>
#include<stdlib.h>
struct _score{
	char ID[9];
	int pc;
	int team;
	int eng;
	float avg;
};/* declare struct */
typedef struct _score score;

void max(score *p);
void fail(score *p);
void Subjectfail(score *p);

score list[5]={{"AI070010",45,55,75,58.33},{"AI070020",85,82,33,66.67},{"AI070030",57,62,48,55.67},
					{"AI070040",15,38,34,29.00},{"AI070050",77,78,75,76.67}};

void PCfail(score *p);
void TEAMfail(score *p);
void ENGfail(score *p);

int main()
{
	while(1)
	{
		puts("Student ID  C_Prog  team   Eng   Avg");
		int i;
		for(i=0;i<5;i++)
			printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,list[i].team,list[i].eng," ",list[i].avg);
		puts("");
		puts("1.Search for the max average");
		puts("2.Search for the average which is below 60");
		puts("3.Search for someone's score which is below 60");
		puts("4.Exit");
		int op=0;
		printf("choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				max(list);
				break;
			case 2:
				fail(list);
				break;
			case 3:
				Subjectfail(list);
				break;
			case 4:
				goto end;
				break;
		}
		system("pause");
		system("cls");
	}
	end:
	system("pause");
	return 0;
}
void max(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	f1=fopen("result.txt","r");
	if(f1==NULL){
		printf("No File!!!");
		exit(-1);
	}
	else{
		float max;
		max=p->avg;
		int i,index;
		for(i=0;i<5;i++){
			if((p+i)->avg>max){
				max=(p+i)->avg;
				index=i;
			}
		}
		f1=fopen("result.txt","a");
		printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[index].ID,list[index].pc,
		list[index].team,list[index].eng," ",list[index].avg);
		fprintf(f1,"%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[index].ID,list[index].pc,
		list[index].team,list[index].eng," ",list[index].avg);
		fclose(f1);
	}
}

void fail(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	f1=fopen("result.txt","r");
	if(f1==NULL){
		printf("No File!!!");
		exit(-1);
	}
	else{
		f1=fopen("result.txt","a");
		int i;
		for(i=0;i<5;i++){
			if((p+i)->avg<60){
				printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
					list[i].team,list[i].eng," ",list[i].avg);
				fprintf(f1,"%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
					list[i].team,list[i].eng," ",list[i].avg);
			}
		}
		fclose(f1);
	}
}

void Subjectfail(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	f1=fopen("result.txt","r");
	if(f1==NULL){
		printf("No File!!!");
		exit(-1);
	}
	else{
		f1=fopen("result.txt","w");
		puts("subject: 1)C 2)team 3)Eng");
		int op;
		printf("which subject:");
		scanf("%d",&op);
		int i;
		switch(op)
		{
			case 1:
				PCfail(p);
				break;
			case 2:
				TEAMfail(p);
				break;
			case 3:
				ENGfail(p);
				break;
		}
	}
	fclose(f1);
}

void PCfail(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	int i;
	for(i=0;i<5;i++){
		if((p+i)->pc<60){
			printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
			fprintf(f1,"%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
		}				
	}
	fclose(f1);
}

void TEAMfail(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	int i;
	for(i=0;i<5;i++){
		if((p+i)->team<60){
			printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
			fprintf(f1,"%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
		}
						
	}
	fclose(f1);
}

void ENGfail(score *p)
{
	FILE *f1;
	f1=fopen("result.txt","w");
	int i;
	for(i=0;i<5;i++){
		if((p+i)->eng<60){
			printf("%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
			fprintf(f1,"%-9s\t%-3d  %3d %5d %2s %1.2f\n",list[i].ID,list[i].pc,
			list[i].team,list[i].eng," ",list[i].avg);
		}
	}
	fclose(f1);
}
