/*

"Take an input n and repeatedly find the sum of the digits of a number till you get a single digit.
Example: 678 -> 6+7+8 = 21 -> 2+1 = 3"

*/

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) {
        sum = 0;
        while (n > 0) {
            sum += n % 10; // Adding the last digit of n to the sum
            n /= 10; // Removing the last digit from n
        }
        n = sum;
    }

    printf("The final single-digit sum is: %d", n);

    return 0;
}

