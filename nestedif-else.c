#include<stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("The number is positive.\n");
     if (number%2 == 0) {
        printf("The number is event.\n");
    } else {
        printf("The number is odd.\n");
    }
}else {
    printf("The number is negative\n");
    return 0;
}
}