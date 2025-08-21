#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}

// 2020 → ✅ Leap (4 se divisible, 100 se nahi)

// 1900 → ❌ Not leap (4 se divisible but 100 se divisible bhi hai)

// 2024 → ✅ Leap

// 2025 → ❌ Not leap
