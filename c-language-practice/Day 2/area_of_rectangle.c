// Aria of rectangle
#include <stdio.h>
int main(){

    float length, width,reactAria;
     printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

     reactAria = length * width;  
     printf("%.2f",reactAria);
}