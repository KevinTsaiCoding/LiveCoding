#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void BBsort(int *numAry,int SIZE);
void swap(int *element1Ptr,int *element2Ptr);
int main()
{
	printf("Generate N numbers to do Bubble Sort.\n"
			"N:");
	int n;
	scanf("%d",&n);
	int number[n];
	int i;
	printf("Before Sorting Order: ");
	for(i=0;i<n;i++){
		number[i]=rand()%101;
		printf("%-3d",number[i]);
	}
	puts("");
	BBsort(number,n);
	printf("After Sorting Order: ");
	for(i=0;i<n;i++){
		printf("%-3d",number[i]);
	}
	puts("");
	system("pause");
	return EXIT_SUCCESS;
}
void BBsort(int *numAry,int SIZE)
{
	int i,j;
	for(j=0;j<SIZE-1;j++){
		for(i=0;i<SIZE-1;i++){
			if(numAry[i]>numAry[i+1]){
				swap(&numAry[i],&numAry[i+1]);
			}
		}
	}
}
void swap(int *element1Ptr,int *element2Ptr)
{
	int temp=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=temp;
}
