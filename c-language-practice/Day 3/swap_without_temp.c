#include <stdio.h> 

int main(){

    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);

     printf("Before swaping : %d %d\n",a, b);


    a = a + b;// a = 10 and b = 20 a+ b  = 3010 
    b = a - b;// b is 30 so  30- 20 = 20; b becomes 10 
    a = a - b;

    printf("After swaping : %d %d\n",a, b);

    return 0;
}