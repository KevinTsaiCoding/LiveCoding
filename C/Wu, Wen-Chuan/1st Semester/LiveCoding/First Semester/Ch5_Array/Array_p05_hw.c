#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
/*�έp��ʿ�J�� n �����, �ú�϶��d�򤺦U�X�{�X�� */
int main()
{
	int i,ary[N]={0},RandomNum,starNum,n; // ary[N]={0} �N��O�N�}�C�̭��Ҧ����k 0 
	srand(time(NULL));
	printf("input n: "); //�n���� n �Ӷü� 
	scanf("%d",&n);
	puts("class \t value \t histogram");
	puts("");
	
	for(i=0;i<n;i++)
	{//�L�榡 �M �H�����Ʀr��  
		RandomNum=rand()%100; 
		if(RandomNum<19)
		{
			ary[0]++;
		}
		else if(RandomNum>=20&&RandomNum<=39)
		{
			ary[1]++;
		}
		else if(RandomNum>=40&&RandomNum<=59)
		{
			ary[2]++;
		}
		else if(RandomNum>=60&&RandomNum<=79)
		{
			ary[3]++;
		}
		else
		{
			ary[4]++;
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t%d\t",i,ary[i]);
		for(starNum=1;starNum<=ary[i];starNum++)
		{// print stars '*'
			printf("*");
		}
		puts("");
	}
	
	system("pause");
	return 0;
} 
