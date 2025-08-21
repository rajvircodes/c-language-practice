#include <stdio.h>

int main(){

    int x,y,result;

    printf("Enter X and Y");
    scanf("%d %d",&x, &y);

    result = (x-y)*(x-y);

    printf("Answer is :%d\n",result);
    return 0;
}