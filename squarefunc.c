#include<stdio.h>
#include<math.h>
void squarefunc(float n);

int main(){
    float n = 4.0;
    printf("%f", pow(n, 2));
    squarefunc(n);
    return 0;
}
void squarefunc(float n) {
printf("Square of %f is: %f\n", n, pow(n, 2));
}
