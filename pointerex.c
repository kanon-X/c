#include<stdio.h>
void dowork(int a, int b, int *sum, int *pord, int *avg);
int main() {
    int x = 3, y = 5;
    int sum, prod, avg;
    dowork(x, y, &sum, &prod, &avg);
    printf("Sum: %d, Product: %d, Average: %d\n", sum, prod, avg);
    return 0;
}
void dowork(int a, int b, int *sum, int *prod, int *avg) {
     *sum = a+b;
    *prod = a*b;
    *avg = (a + b) / 2;

}