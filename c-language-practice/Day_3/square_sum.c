#include <stdio.h>

int main(){
    int x,y,result;

    printf("Enter x and y:");
    scanf("%d %d",&x, &y);

    result = (x + y) * (x + y);

    printf("Answer is: %d",result);

    return 0;
    
}