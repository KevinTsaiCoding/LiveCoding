#include<stdio.h>
#include<string.h>
struct profile{
	char ID[11];
	char name[6];
	int birthday;
	int height;
	int weight;
};
void search(struct profile *student,char find[11]);
int main()
{
	char find[11],end[4]={'e','n','d','\0'};
	while(strcmp(end,gets(find))!=0){
		struct profile student[5]={"A122334002","David",880523,173,68,
					"M112785994","John",890722,178,75,
					"L222333885","Sue",880918,162,45,
					"R217882495","Sally",880311,166,88,
					"A185224569","Kevin",891201,183,92};
		search(student,find);
	}
	system("pause");
	return 0;
}
void search(struct profile *student,char find[11])
{
	int i,flag=0;
	for(i=0;i<5;i++)
	{
		if(strcmp(student[i].ID,find)==0)
		{
			flag=1;
			printf("ID:%s\n",student[i].ID);
			printf("Name:%s\n",student[i].name);
			printf("Birthday:%d\n",student[i].birthday);
			printf("Height:%d\n",student[i].height);
			printf("Weight:%d\n",student[i].weight);
			break;
		}
	}
	if(flag==0)
		printf("沒有這位學生\n");
}
