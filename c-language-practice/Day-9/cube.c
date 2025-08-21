#include <stdio.h>

int Findcube(int n) {
    return n * n * n;
}

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Cube is: %d\n", Findcube(num));
    return 0;
}
