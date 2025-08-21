#include <stdio.h>

int main() {

    //find the area of circle.
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius; 

    printf("Area of Circle = %.2f\n", area);
    return 0;
}