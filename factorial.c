#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact =1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    printf("final factorial is %d",fact);
    return 0;
}