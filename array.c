#include<stdio.h>
int main() {
    int marks[3];
    printf("enter phy : ");
    scanf("%d", &marks[0]);

     printf("enter chem : ");
    scanf("%d", &marks[0]);

     printf("enter math : ");
    scanf("%d", &marks[0]);

    printf("Physics: %d, Chemistry: %d, Mathematics: %d\n", marks[0], marks[1], marks[2]);

    return 0;
}