#include<stdio.h>
void a();
void b();
int main(){
    printf("Calling function a:\n");
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a') {
        a();
    } else {
        b();
    }
    return 0;
}
void a(){
    printf("Function a called\n");
}
void b(){
    printf("Function b called\n");
}