#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    // Correct format specifier for float value
    printf("%f\n", **pptr);

    return 0;
}
