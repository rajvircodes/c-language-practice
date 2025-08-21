#include <stdio.h>
int main(){

    int first,second;

    printf("Enter the first Number");
    scanf("%d",&first);


    printf("Enter the second Number");
    scanf("%d",&second);

    while(first<=second){
        if ((first % 400 == 0) || (first % 4 == 0 && first % 100 != 0)) {
        printf("%d\n",first);
    }
    first++;

    }
return 0;
}