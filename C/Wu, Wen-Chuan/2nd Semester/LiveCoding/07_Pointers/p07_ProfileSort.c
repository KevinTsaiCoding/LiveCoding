#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3
int main()
{
	char name[N][10];
	int age[N];
	char gender[N];
	int salary[N];
	int i;
	for(i=0;i<N;i++){
		printf("player %d\n",i+1);
		printf("name:");
		scanf("%s",&name[i]);
		printf("age:");
		scanf("%d",&age[i]);
		fflush(stdin);
		printf("gender:");
		scanf("%c",&gender[i]);
		printf("salary:");
		scanf("%d",&salary[i]);
	}
	int j;
	for(j=0;j<N;j++){
		for(i=0;i<N-1;i++){
			if(salary[i]<salary[i+1])
			{
				int SalTemp;
				SalTemp=salary[i];
				salary[i]=salary[i+1];
				salary[i+1]=SalTemp;
				/* sort salary.*/
				char GenderTemp;
				GenderTemp=gender[i];
				gender[i]=gender[i+1];
				gender[i+1]=GenderTemp;
				/*Finished sorting salary, we sort gender.*/
				int AgeTemp;
				AgeTemp=age[i];
				age[i]=age[i+1];
				age[i+1]=AgeTemp;
				/*Finished sorting salary, we sort age.*/
				char NameTemp[10];
				strcpy(NameTemp,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],NameTemp);
			}
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}
