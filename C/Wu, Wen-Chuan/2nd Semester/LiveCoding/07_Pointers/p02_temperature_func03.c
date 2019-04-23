#include<stdlib.h>
#include<stdio.h>
void CtoF(float *Ptr);
void FtoC(float *Ptr);
int main()
{
	printf("select 1 or 2:\n");
	printf("1:攝氏轉華氏\n2:華氏轉攝氏\n");
	int choice;
	printf("ans:");
	scanf("%d",&choice);
	float temperature;
	if(choice==1){
		printf("temp:");
		scanf("%f",&temperature);
		CtoF(&temperature);
		printf("temp= %.2f\n",temperature);
	}
	else if(choice==2){
		printf("temp:");
		scanf("%f",&temperature);
		FtoC(&temperature);
		printf("temp= %.2f\n",temperature);
	}
    system("pause");
    return 0;
}
void CtoF(float *Ptr)
{
	*Ptr=*Ptr*9/5+32;
	return;
}
void FtoC(float *Ptr)
{
	*Ptr=(*Ptr-32)*5/9;
}
