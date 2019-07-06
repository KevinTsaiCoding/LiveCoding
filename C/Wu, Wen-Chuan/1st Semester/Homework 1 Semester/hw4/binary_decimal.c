#include <stdio.h>
#include <stdlib.h>
/*AI072162 ½²Þm«T_convert binary to decimal*/ 
int main()
{
	int decimal=0,base=0,product=128;
	/*base, example 2^3, 2 is base. And product=128=2^7*/
	while(product>0)
	{
		printf("input: ");
		scanf("%d", &base);
		decimal=decimal+base*product;
		product=product/2;/*for the purpose of decreasing
		product, example, 2^7 -> 2^6 -> 2^5*/
	}
	printf("%d", decimal);
	system("pause");
	return 0;
}
