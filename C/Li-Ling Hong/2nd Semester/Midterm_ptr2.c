#include <stdio.h>
#include <stdlib.h>
void arr(double *s);
int main(void){
    double a[6][5] = {{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {16,17,18,19,20},
                   {16,17,18,19,20}};
    arr(a);

    system("pause");
    return 0;
}

void arr(double *s){
     int i = 0, j = 0 ;     
     
     for(i = 0 ; i < 6 ; i++){
           for(j = 0 ; j < 5 ; j++){
                 printf("%d ", s+i*5+j);
           }      
           printf("\n");
     }
     
          for(i = 0 ; i < 6 ; i++){
           for(j = 0 ; j < 5 ; j++){
                 printf("%f ", *(s+i*5+j));
           }      
           printf("\n");
     }
     
}
