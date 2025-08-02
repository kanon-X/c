#include<stdio.h>
void func1(int n);

int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
    func1(n);
    return 0;

}
void func1(int n) {
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}