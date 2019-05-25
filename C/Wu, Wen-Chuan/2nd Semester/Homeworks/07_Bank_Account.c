#include<stdio.h>
#include<stdlib.h>
struct _clientData{
	int accountNum;
	char LastName[10];
	char FirstName[10];
	float balance;
};
typedef struct _clientData clientData;

void touch(void);
void ls(void);
void reset(void);
void rm(void);

int main()
{
	while(1)
	{
		puts("0. Reset Bank account.");
		puts("1. Create/Append an Account.");
		puts("2. Show an Account.");
		puts("3. Delete an Account.");
		puts("4. Exit.");
		int op;
		printf("> ");
		scanf("%d",&op);
		switch(op)
		{
			case 0:/* reset */
				reset();
				break;
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
void reset()
{
	clientData data={0,"","",0.0};
	FILE *f1;
	f1=fopen("data.txt","wb");
	int i;
	for(i=1;i<=100;i++)
		fwrite(&data,sizeof(clientData),1,f1);
	fclose(f1);
}
void touch()
{
	clientData data={0,"","",0.0};
	FILE *f1Binary;
	f1Binary=fopen("data.txt","wb");
	if(f1Binary==NULL){
		printf("No file\n");
		exit(1);
	}
	else{
		int i;
		for(i=1;i<=100;i++)/* you now can have 100 data of the client with binary*/
			fwrite(&data,sizeof(clientData)*1,1,f1Binary);
		printf("Enter an account number(1 to 100, 0 to end input)\n");
		printf("> ");
		scanf("%d",&data.accountNum);
		puts("Enter lastname, firstname, and your balance");
		scanf("%s%s%f",data.LastName,data.FirstName,&data.balance);
		fseek(f1Binary,(data.accountNum-1/*cuz this data needs to write before it no including it*/)*sizeof(clientData),SEEK_SET);/* write data in here */
		fwrite(&data,sizeof(clientData)*1,1,f1Binary);
		fclose(f1Binary);
	}
}
void ls(void)
{
	clientData data={0,"","",0.0};
	FILE *f1Binary;
	f1Binary=fopen("data.txt","rb");
	if(f1Binary==NULL){
		printf("No file\n");
		exit(1);
	}
	else{
		int i;
		for(i=1;i<=100;i++)/* you now can have 100 data of the client with binary*/
			fwrite(&data,sizeof(clientData)*1,1,f1Binary);
		printf("Enter an account number(1 to 100, 0 to end input)\n");
		printf("> ");
		scanf("%d",&data.accountNum);
		if(data.accountNum!=0){
			fseek(f1Binary,(data.accountNum-1/*cuz this data needs to write before it no including it*/)*sizeof(clientData),SEEK_SET);/* write data in here */
			fread(&data,sizeof(clientData)*1,1,f1Binary);
			printf("%d %8s %8s %8.2f\n",data.accountNum,data.LastName,data.FirstName,data.balance);
		}
		
		
		fclose(f1Binary);
	}
}
void rm(void)
{
	clientData data={0,"","",0.0};
	FILE *f1Binary;
	f1Binary=fopen("data.txt","wb");
	if(f1Binary==NULL){
		printf("No file\n");
		exit(1);
	}
	else{
		printf("Enter an account number(1 to 100, 0 to end input)\n");
		printf("> ");
		scanf("%d",&data.accountNum);
		if(data.accountNum!=0){
			fseek(f1Binary,(data.accountNum-1/*cuz this data needs to write before it no including it*/)*sizeof(clientData),SEEK_SET);/* write data in here */
			fwrite(&data,sizeof(clientData),1,f1Binary);
		}
		fclose(f1Binary);
	}
}
