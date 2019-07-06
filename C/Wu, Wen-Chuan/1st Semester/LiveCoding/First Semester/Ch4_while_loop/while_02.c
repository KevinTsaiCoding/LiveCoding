#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
//Mathmetic: power, by using pow and while fuction
int main()
{
	double i;
	while(i>0&&i<=10)
	{
		printf("2^%.lf=%.lf\n",i,pow(2,i)); 
		i+=1; 
	}
	system("pause");
	return 0; 
}
