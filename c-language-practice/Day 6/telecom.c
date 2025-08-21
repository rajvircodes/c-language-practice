#include <stdio.h>
 //Telecome service using nested switch 
int main(){

    int lang,service;

    printf("press 1 for English\n");
    printf("press 2 for Hindi\n");
    printf("press 3 for Gujrati\n");
    printf("Enter your choice\n");
    scanf("%d",&lang);


    switch(lang){
        case 1 : 
        printf("\nPress 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for special Recharge\n");
        printf("Enter your choice\n");
        scanf("%d",&service);

            switch(service){
                case 1:
                    printf("You have successfully done Internet recharge\n");
                    break;
                case 2: 
                    printf("You have successfully done top-up recharge\n");
                    break;
                case 3: 
                    printf("You have successfully done special recharge");
                    break;
                default: 
                    printf("Invalid service option");
            }

            break;
        
            case 2: 
                printf("Hindi manu is here...\n");
                break;
            case 3:
                printf("Gujrati manu is here...\n");
                break;
            default:
                printf("Invalid language choice\n");
    }

    return 0;

}