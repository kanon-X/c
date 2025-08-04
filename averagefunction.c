#include<stdio.h>
int calcPercentage(int science,int maths,int english);
int main(){
    int science = 98;
    int maths = 95;
    int english = 90;
    printf("Percentage: %d%%\n", calcPercentage(science, maths, english));
    return 0;
}

int calcPercentage(int science, int maths, int english) {
    int totalMarks = science + maths + english;
    return (totalMarks * 100) / 300; // Assuming each subject is out of 100
}