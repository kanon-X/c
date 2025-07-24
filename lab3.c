#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", s);
    if (!strcmp(s, "abb")){
        printf("output:\n%s is accepted under rule 'abb'\n", s);

    }else
    {
        while (s[i] == 'a')
        i++;
        int bstart =i;
        while (s[i] == 'b')
        i++;
        if (bstart < i && i== strlen(s)){
            printf("output:\n%s is accepted under rule 'a*b+'\n", s);   
        }
        else{
            printf("output:\n%s is not recognized\n", s);
        }
               
    }
    return 0;
    
}