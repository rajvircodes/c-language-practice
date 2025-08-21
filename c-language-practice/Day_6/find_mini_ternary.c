#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Enter value of first number: ");
    scanf("%d", &a);

    printf("Enter value of second number: ");
    scanf("%d", &b);

    printf("Enter value of third number: ");
    scanf("%d", &c);

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("The minimum value is %d\n", min);

    return 0;
}
