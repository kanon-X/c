#include<stdio.h>
#include<string.h>
int main() {
    char input[1000];
    int i =0;
    int count = 0;
    printf("Enter comment: ");
    scanf("%s" , &input);
    if(input[0]== '/' && input[1] =='/')
    printf("It is a single-line comment.\n");
    else if(input[0] == '/' && input[1] == '*')
    printf("It is a multi-line comment.\n");
    else 
        printf("It is not a comment.\n");
        while (input[i] != '\0' )
        {
            count++;
            i++;
        }
        printf("Total letter is: %d", count);
        return 0;
               
    }