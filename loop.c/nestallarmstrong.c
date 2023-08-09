/*

three digit armstrong number:-


153 is an Armstrong number.
370 is an Armstrong number.
371 is an Armstrong number.
407 is an Armstrong number.


*/

#include <stdio.h>
#include <math.h>

int main() {
    for (int num = 100; num <= 999; num++) {
        int hundreds_digit = num / 100;
        int remaining = num % 100;
        int tens_digit = remaining / 10;
        int ones_digit = remaining % 10;

        int sum_cubes = pow(hundreds_digit, 3) + pow(tens_digit, 3) + pow(ones_digit, 3);

        if (sum_cubes == num) {
            printf("%d is an Armstrong number.\n", num);
        }
    }

    return 0;
}

