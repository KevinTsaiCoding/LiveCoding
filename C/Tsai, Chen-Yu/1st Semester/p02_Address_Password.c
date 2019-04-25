#include<stdio.h>
#include<stdlib.h>
/*AI072162 蔡煒俊*/
int main()
{
	system("color f1");
	int address, password, address2, password2;
	puts("新增帳密 \n");
	printf("新增帳號: ");
	scanf("%d", &address);
	puts("\n");
	printf("新增密碼: ");
	scanf("%d", &password);
	puts("");
	puts("登入帳密\n");
	printf("帳號: ");
	scanf("%d", &address2);
	printf("密碼: ");
	scanf("%d", &password2);
	if(address2==address && password2==password)
	{
		printf("Access");
	}
	else
	puts("Wrong");
	system("pause");
	return 0;
} 
