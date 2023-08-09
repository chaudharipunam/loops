/*

Some two-digit numbers have the property that the sum of the squares of the numbers equals the sum of the squares of the numbers with reversed digits (for example, 482 + 522 + 632= 842 + 252 + 362). Construct a flowchart to show how to determine all such two-digit numbers.


1 + 0 = 1 + 0
1 + 1 = 1 + 1
1 + 4 = 1 + 4
1 + 9 = 1 + 9
1 + 16 = 1 + 16
1 + 25 = 1 + 25
1 + 36 = 1 + 36
1 + 49 = 1 + 49
1 + 64 = 1 + 64
1 + 81 = 1 + 81

*/

#include <stdio.h>

int main() {
    for (int num = 10; num <= 99; num++) {
        int tens_digit = num / 10;
        int ones_digit = num % 10;
        int sum_squares = (tens_digit*tens_digit)+(ones_digit*ones_digit);
        int reversed_num = (ones_digit * 10) + tens_digit;
        int reversed_sum_squares = (reversed_num / 10) * (reversed_num / 10) + (reversed_num % 10) * (reversed_num % 10);
        if (sum_squares == reversed_sum_squares) {
            printf("%d + %d = %d + %d\n", (tens_digit * tens_digit), (ones_digit * ones_digit),
                                         (reversed_num % 10) * (reversed_num % 10), (reversed_num / 10) * (reversed_num / 10));
        }
    }

    return 0;
}

