#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("Enter A and B");
    scanf("%d %d", &a, &b);

    printf("Before swaping : %d %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swaping Numbers: %d %d\n", a, b);

    return 0;
}