#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n, digit, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n; // Store the original number to compare later

    while (n > 0) {
        digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == temp) {
        printf("It is a strong number.\n");
    } else {
        printf("It is not a strong number.\n");
    }

    return 0;
}

