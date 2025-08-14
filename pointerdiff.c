#include<stdio.h>
int main() {
    int age = 22;
    char _age= 'A';
    int *ptr = &age;
    char *_ptr = &age;
    printf("%u, %udifference = %u\n" , ptr, _ptr, ptr-_ptr);
    return 0;

}