#include<stdio.h>
#include<stdlib.h>
struct _clientData{
    int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};
typedef struct _clientData clientData;
int main()
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
		scanf("%d",&data.acctNum);
		while(data.acctNum!=0){
			puts("Enter lastname, firstname, and your balance");
			scanf("%s%s%lf",data.lastName,data.firstName,&data.balance);
			fseek(f1Binary,(data.acctNum-1/*cuz this data needs to write before it no including it*/)*sizeof(clientData),SEEK_SET);/* write data in here */
			fwrite(&data,sizeof(clientData)*1,1,f1Binary);
			printf("Enter an account number(1 to 100, 0 to end input)\n");
			printf("> ");
			scanf("%d",&data.acctNum);
		}
		fclose(f1Binary);
	}
	system("pause");
	return 0;
}
