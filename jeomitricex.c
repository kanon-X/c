#include<stdio.h>
#include<math.h>
 float square(float a);
 float circle(float r);
 float rectangle(float l, float b);

 int main(){
    float a = 5.0, r = 3.0, l = 4.0, b = 2.0;
    printf("Area of Square: %.2f\n", square(a));
    printf("Area of Circle: %.2f\n", circle(r));
    printf("Area of Rectangle: %.2f\n", rectangle(l, b));

    return 0;
 }
 float square(float a) {
    return a*a;
 }
 float circle(float r) {
    return 3.14 * r * r;
 }
 float rectangle(float l, float b) {
    return l*b;
 }
