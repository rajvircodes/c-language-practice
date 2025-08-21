#include <stdio.h>
#include <stdbool.h>


int main(){

    int age = 18;

    bool hasLicence = true;

    if(age >=18){
        if(hasLicence){
            printf("You can drive");
        }else{
            printf("You have to register for licence");
        }
    }else {
        printf("You can't drive");
    }
    return 0;

}