#include <stdio.h>
int main(){
     //find the area of square
    float side, areaOfSquare;
    printf("Enter side length of square: ");
    scanf("%f", &side);

    areaOfSquare = side * side; // Formula: side²

    printf("Area of Square = %.2f\n", areaOfSquare);

    return 0;
}