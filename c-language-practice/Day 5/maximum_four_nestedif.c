#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        if (a > c) {
            if (a > d)
                printf("Maximum = %d\n", a);
            else
                printf("Maximum = %d\n", d);
        } else {
            if (c > d)
                printf("Maximum = %d\n", c);
            else
                printf("Maximum = %d\n", d);
        }
    } else {
        if (b > c) {
            if (b > d)
                printf("Maximum = %d\n", b);
            else
                printf("Maximum = %d\n", d);
        } else {
            if (c > d)
                printf("Maximum = %d\n", c);
            else
                printf("Maximum = %d\n", d);
        }
    }

    return 0;
}
