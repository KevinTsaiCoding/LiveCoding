#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int convert_dec_to_bin(int decimal);
int main()
{
	int dec;
	srand(time(NULL));
	dec=(rand()%255)+1;
	printf("random number: %d\n",dec);
	printf(">> %d\n",convert_dec_to_bin(dec));
	system("pause");
	return 0;
}
int convert_dec_to_bin(int decimal)
{
	int remainder,i=1,bin=0;
	while(decimal>0)
	{
		remainder=decimal%2;
		decimal=decimal/2;
		bin=bin+remainder*i;
		i=i*10;
	}
	return bin;
}

