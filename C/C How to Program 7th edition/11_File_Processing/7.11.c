#include<stdio.h>
#include<stdlib.h>
double add(double *n1,double *n2);
int main()
{
	double x,y;
	scanf("%lf%lf",&x,&y);
	printf("x + y = %.3f\n",add(&x,&y));
	system("pause");
	return EXIT_SUCCESS;
}
double add(double *n1,double *n2)
{
	int sum;
	sum = *n1+*n2;
	return sum;
}
