#include<stdio.h>
#include<stdlib.h>
struct Profile{
		char name[10];
		int age;
		char gender;
		int salary;
};
void showList(struct Profile student);
void showlist_2(struct Profile *student);
int main()
{
	struct Profile student[2];
	int i;
	for(i=0;i<2;i++){
		printf("Name:");
		scanf("%s",&student[i].name);
		printf("Age:");
		scanf("%d",&student[i].age);
		fflush(stdin);
		printf("Gender:");
		scanf("%c",&student[i].gender);
		printf("Salary:");
		scanf("%d",&student[i].salary);
	}
	showlist_2(student);
	system("pause");
	return EXIT_SUCCESS;
}
void showlist_2(struct Profile *student)
{
	int i;
	for(i=0;i<2;i++){
		printf("Name:%s\n"
		"Age:%d\n"
		"Gender:%c\n"
		"Salary:%d\n",student->name,student->age,student->gender,student->salary);
		puts("");
		student++;
	}
}
