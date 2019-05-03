#include<stdio.h>
#include<stdlib.h>
#define N 5
struct _score{
	char ID[9];
	int C;
	int team;
	int Eng;
	float avg;
};
typedef struct _score score;
void display(score *ptr);
int main()
{
	printf("Student ID\tC\tteam\tEnglish\n\n");
	score profile[N]={
					{"AI070010",45,55,75},
					{"AI070020",85,82,33},
					{"AI070030",57,62,48},
					{"AI072162",85,65,98},
					{"AI123456",55,60,48}
	};
	display(profile);
	int i;
	int sum;
	for(i=0;i<N;i++){
		sum=0; 
		sum+=profile[i].C+profile[i].team+profile[i].Eng;
		profile[i].avg=(float)sum/3;
		printf("Student %d: %.2f\n",i+1,profile[i].avg);
	}
	system("pause");
	exit(0);
}
void display(score *ptr)
{
	int i;
	for(i=0;i<N;i++){
		printf("%10s\t%-3d\t%-3d\t%-3d\n",ptr->ID,ptr->C,ptr->team,ptr->Eng);
		ptr++;
	}
}
