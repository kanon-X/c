#include<stdio.h>
int main(){
    int adr[5];
    int *ptr = &adr[0];
    for(int i=0; i<5; i++){
        printf("%d index :", i);
        scanf("%d", (ptr+i));
    }
    for(int i=0; i<5; i++){
        printf("%d index = %d\n",i, *(ptr+i));
}
return 0;
}