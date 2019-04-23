#include<stdlib.h>
#include<stdio.h>
float centigradeTOfahrenheit(float *cPtr);
int main()
{
	printf("Centigrade\tFahrenheit");
	float i;
	for(i=0.0;i<=100.0;i++)
	{
		printf("\n%.2f\t%.2f\n",i,centigradeTOfahrenheit(&i));
	}
	system("pause");
    return 0;
}
float centigradeTOfahrenheit(float *cPtr)
{
	float f;
	f=((*cPtr)*9/5)+32;
	return f;	
} 
