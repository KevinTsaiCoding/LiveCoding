#include <stdio.h>
#include <stdlib.h>
void hanoi(int, char, char, char);
int time = 0;
int main(void){
    int n;
    printf("�п�J�e���𪺰��סG");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("���� %d �h�e����@�ݲ��� %d ��\n", n, time);
    system("pause");
}
void hanoi(int n, char A, char B, char C){
    if (n == 1){
        printf("%-3d: �N�� %-3d�Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
    }
    else{
        hanoi(n - 1, A, C, B);
        printf("%-3d: �N�� %-3d�Ӷ�L�� %c ���� %c\n", ++time, n, A, C);
        hanoi(n - 1, B, A, C);
    }
}
