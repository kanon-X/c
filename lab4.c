#include <stdio.h>

int main() {
    float a, b;
    printf("Enter the coefficient a: ");
    scanf("%f", &a);
    printf("Enter the constant b: ");
    scanf("%f", &b);
    if (a == 0) {
        if (b == 0) {
            printf("The equation has infinite solutions.\n");
        } else {
            printf("The equation has no solution.\n");
        }
    } else {
        float x = -b / a;
        printf("The equation is solvable. The solution is x = %.2f\n", x);
    }

    return 0;
}
