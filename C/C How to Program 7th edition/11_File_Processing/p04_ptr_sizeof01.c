#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	long int b;
	short int B;
	unsigned c;
	float d;
	double e;
	long double f;
	char g;
	printf("int a %d bytes.\n",sizeof(a));
	printf("long int b %d bytes.\n",sizeof(b));
	printf("short int B %d bytes.\n",sizeof(B));
	printf("unsigned int c %d bytes.\n",sizeof(c));
	printf("float d %d bytes.\n",sizeof(d));
	printf("double e %d bytes.\n",sizeof(e));
	printf("long double f %d bytes.\n",sizeof(f));
	printf("char g %d bytes.\n",sizeof(g));
	system("pause");
	return EXIT_SUCCESS;
} 
