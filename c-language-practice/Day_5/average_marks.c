#include <stdio.h>

int main(){

    float sub1, sub2, sub3, total, average;

    printf("Enter marks of three subjects (out of 100): ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3;
    
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}