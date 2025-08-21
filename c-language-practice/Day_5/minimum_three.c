#include <stdio.h>

int main(){

    int a,b,c;

    printf("Enter theee numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<=b && a<=c){
        printf("small nuber is :%d\n",a);
    }else if (b<=a && b<=c){
        printf("Minimun number is:%d",b);
    }else{
        printf("Mininmun number is :%d",c);
    }
    
    return 0;

}