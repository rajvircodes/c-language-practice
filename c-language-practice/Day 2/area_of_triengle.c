#include <stdio.h>
int main(){

    //area of triange 
    //formula = 0.5 * base * hight 

    float base,hieght,areaofTri;

    printf("Enter the base of triange");
    scanf("%f",&base);
    printf("Enter the Hieght of triange");
    scanf("%f",&hieght);

    areaofTri = 0.5 * base * hieght;
    printf("Area is truange is: %.2f",areaofTri);

    return 0;
}