#include<stdio.h>
#include<stdlib.h>
/* ���J���r�ꪺ�r�������ܦ��j�g; ASCII CODE: A~Z: 65~90; a~z:97~122 */ 
int main()
{
	char ary[80];
	scanf("%s",ary);
	int i;
	for(i=0;ary[i]!='\0';i++)
	{
		if(ary[i]>=97&&ary[i]<=122)
			ary[i]=ary[i]-32;
	}
	printf("%s",ary);
	printf("\n");
	system("pause");
	return 0;	
}
