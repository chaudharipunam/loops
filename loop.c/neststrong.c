#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    for (int num = 100; num <= 999; num++) {
        int hundreds_digit = num / 100;
        int remaining = num % 100;
        int tens_digit = remaining / 10;
        int ones_digit = remaining % 10;

        int sum_factorials = factorial(hundreds_digit) + factorial(tens_digit) + factorial(ones_digit);

        if (sum_factorials == num) {
            printf("%d is a number where the sum of the factorials of its digits equals the number itself.\n", num);
        }
    }

    return 0;
}

