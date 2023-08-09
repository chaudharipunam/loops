/*

Construct a flowchart to input a positive integer. If the number is even, add up its digits. Otherwise, multiply the individual digits and print the result.

answer:-

Enter a positive integer: 71
Product of digits: 7

Enter a positive integer: 45
Sum of digits: 4

Enter a positive integer: 79
Product of digits: 63

Enter a positive integer: 44
Sum of digits: 8

*/


#include <stdio.h>
int main() {
    int num, digit, sum = 0, product = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (num % 2 == 0) {
            sum += digit;
        } else {
            product *= digit;
        }
        num /= 10;
    }
    if (sum > 0) {
        printf("Sum of digits: %d\n", sum);
    } else {
        printf("Product of digits: %d\n", product);
    }
    return 0;
}

