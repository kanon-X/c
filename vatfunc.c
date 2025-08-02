#include<stdio.h>
void calprice(float value);
 int main(){
    float value = 100.0;
    calprice(value);
    return 0;
}
 void calprice(float value) {
    value = value +(value*0.15);
    printf("final price is : %f", value);
 }