#include <stdio.h>
#include <stdlib.h>
int checkCard(int *f,int k);
int checkFlush(int *s);
int checkStraight(int *f);
int checkFullHouse(int *f);

int main(void){
	int n,i;
	char arr[20];
	printf("次數:");
	scanf("%d",&n);
	fflush(stdin);
	
	char *ptr,S[8]={'S','s','H','h','D','d','C','c'};
	int face[13]={0},suit[4]={0},num,k;
	for(i=1;i<=n;i++){
		printf("Input:");
		gets(arr);
		//拆字符 >> 統計 
		ptr=strtok(arr," ");
		while(ptr!=NULL){
			//printf("%s\n",ptr);
			for(k=0;k<8;k+=2){ 
				if(*(ptr+0)==S[k] || *(ptr+0)==S[k+1])
					suit[k/2]++;
			} 
			num=atoi(ptr+1);
			face[num-1]++;
			ptr=strtok(NULL," ");
		}
		
		//判斷牌型 
		if(checkCard(face,4)==1)
			printf("Type:Four of a Kind\n");
		else if(checkStraight(face) && checkFlush(suit))
			printf("Type:Straight Flush\n");
		else if(checkFullHouse(face)==1)
			printf("Type:Full House\n");
		else if(checkFlush(suit))
			printf("Type:Flush\n");
		else if(checkStraight(face))
			printf("Type:Straight\n");
		else if(checkCard(face,3)==1)
			printf("Type:Three of a Kind\n");	
		else if(checkCard(face,2)==2)
			printf("Type:Two Pairs\n");
		else if(checkCard(face,2)==1)
			printf("Type:One Pair\n");		
		else
			printf("Type:High Card\n");
		
		//清除資料 
		for(k=0;k<4;k++)
			suit[k]=0;
		for(k=0;k<13;k++)
			face[k]=0;
		printf("\n");
	}	
	system("pause");
	return 0;
} 
int checkCard(int *f,int k){
	int i,status=0;
	for(i=0;i<13;i++,f++){
		if(*f==k)
			status++;
	}
	if(status==1)
		return 1;
	else if(status==2)
		return 2;
	else 
		return 0;
}
int checkFlush(int *s){
	int i,status=0;
	for(i=0;i<4;i++,s++){
		if(*s==5)
			status++;
	}
	return (status==0)?0:1;
}
int checkStraight(int *f){
	int i,j,total;
	for(i=0;i<=13-5;i++){
		total=0;
		for(j=0;j<5;j++){
			if(*(f+i+j)==1)
				total++;
		}		
		if(total==5)		
			return 1;		
	}
	return 0;
}
int checkFullHouse(int *f){
	int i,s2=0,s3=0;
	for(i=0;i<13;i++,f++){
		if(*f==2)
			s2++;
		if(*f==3)
			s3++;
	}
	printf("s2:%d s3:%d\n",s2,s3);
	return (s2 && s3)?1:0;
}
