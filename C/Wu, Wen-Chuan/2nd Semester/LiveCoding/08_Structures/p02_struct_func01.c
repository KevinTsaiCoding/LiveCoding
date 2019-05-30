#include<stdio.h>
#include<stdlib.h>
struct Profile{
		char name[10];
		int age;
		char gender;
		int salary;
};
void showList(struct Profile student);
int main()
{
	struct Profile student;
	printf("Name:");
	scanf("%s",&student.name);
	printf("Age:");
	scanf("%d",&student.age);
	fflush(stdin);
	printf("Gender:");
	scanf("%c",&student.gender);
	printf("Salary:");
	scanf("%d",&student.salary);
	showList(student);/* call by value */
	system("pause");
	return EXIT_SUCCESS;
}
void showList(struct Profile student)
{
	printf("Name:%s\n"
	"Age:%d\n"
	"Gender:%c\n"
	"Salary:%d\n",student.name,student.age,student.gender,student.salary);
}
