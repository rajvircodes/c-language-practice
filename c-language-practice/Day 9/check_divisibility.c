#include <stdio.h>

// User Defined Function
void checkDivisible(int n) {
    if(n % 3 == 0 && n % 5 == 0) {
        printf("divisible by both 3 & 5.\n");
    } else {
        printf(" not divisible by both 3 & 5.\n");
    }
}

int main() {
    int num;
    printf("Enter any number: ");

    scanf("%d", &num);

    checkDivisible(num);
    return 0;
}
