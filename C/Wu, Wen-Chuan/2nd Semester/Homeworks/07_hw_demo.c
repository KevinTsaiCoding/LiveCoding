#include<stdio.h>
struct _clientData{
	int accountNum;
	char LastName[10];
	char FirstName[10];
	float balance;
};
typedef struct _clientData clientData;
void touch(void);
void ls(void);

int main()
{
	while(1)
	{
		puts("1. Create/Append an Account");
		puts("2. Show an Account");
		puts("3. Delete an Account");
		puts("4. Exit");
		int op;
		printf("> ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:/* Create account */
				touch();
				break;
			case 2:/* Show account */
				ls();
				break;
			case 3:/* Delete account */
				rm();
				break;
			case 4:/* Exit the program */
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
