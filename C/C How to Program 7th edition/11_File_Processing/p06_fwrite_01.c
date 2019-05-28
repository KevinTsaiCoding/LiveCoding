#include<stdio.h>
#include<stdlib.h>
struct _clientData{
	unsigned int AccountNumber;
	char LastName[10];
	char FirstName[10];
	double balance;
};
typedef struct _clientData clientData;
int main()
{
	clientData client={0,"","",0.0};/* make struct client with default */
	FILE *f1;
	f1=fopen("data.txt","wb");
	unsigned int i;
	for(i=1;i<=100;i++)
		fwrite(&client,sizeof(clientData),1,f1);
	fclose(f1);
	system("pause");
	return 0;
}
