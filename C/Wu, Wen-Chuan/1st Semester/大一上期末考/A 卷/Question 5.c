#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("two values: ");
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){// swap a,b values.
		int k=a;
		a=b;
		b=k;
	}// end if
	int i,j;
	int counter,result=0;
	for(i=a;i<=b;i++)
	{	
		counter=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				counter++;
		}
		if(counter==2)
			result++;
	}
	printf("%d~%d 有%d個質數\n",a,b,result);
	return EXIT_SUCCESS;
	system("pause");
}
