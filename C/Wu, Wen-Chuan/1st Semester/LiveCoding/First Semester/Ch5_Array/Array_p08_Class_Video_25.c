#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*�}�C�ŧi�G����5�ӪŶ����}�C�A�N�o�ǪŶ��M�šA
�M���J�ü�������ܥX�ӡC*/
int main()
{
	int ary[5];
	ary[0]=0;
	ary[1]=0;
	ary[2]=0;
	ary[3]=0;
	ary[4]=0;
/*�W���� 7~11�� �򩳤U�ǥ� for �j��Ҥ޾ɪ� 
�� 16 ��N��O�@�˪� */
	int i;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		ary[i]=0;
		ary[i]=rand()%100;
		printf("ary[%d]=%d\n",i,ary[i]);
	}
	return 0;
}
