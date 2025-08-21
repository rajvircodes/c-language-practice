#include <stdio.h>

// write a program to print numbers 1 to 10

int main(){

    int num = 1;

while(num<=10){
    printf("%d\n",num);
    num++;
}
// print number 10 t0 1 (reverse)

  int j = 10;
    while (j>=1) 
    {
        printf("%d\n",j);
        j--;
    }

    //print numbers 1 to N 

    int k,i =1;
    printf("Enter number");
    scanf("%d",&k);

    while(i<=k){
        printf("%d\n",i);
        i++;
    }

    return 0;
}
