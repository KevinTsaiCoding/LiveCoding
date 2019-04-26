#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct Profile{
		char name[10];
		int age;
		char gender;
		int salary;
	};
	struct Profile student;
	scanf("%s",&student.name);
	scanf("%d",&student.age);
	fflush(stdin);
	scanf("%c",&student.gender);
	scanf("%d",&student.salary);
	printf("Name:%s\nAge:%d\nGender:%c\nSalary:%d\n",student.name,student.age,student.gender,student.salary);
	system("pause");
	return EXIT_SUCCESS;
}
