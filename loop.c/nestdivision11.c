/*

Enter the value of N: 11
The count of numbers not divisible by any of (2, 3, 4, 5, 6, 7, 8, 9, 10) is: 2

Enter the value of N: 21
The count of numbers not divisible by any of (2, 3, 4, 5, 6, 7, 8, 9, 10) is: 5


*/

#include <stdio.h>
int main() {
    int N, count = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int num = 1; num <= N; num++) {
        int is_divisible = 0;
        for (int divisor = 2; divisor <= 10; divisor++) {
            if (num % divisor == 0) {
                is_divisible = 1;
                break;
            }
        }
        if (!is_divisible) {
            count++;
        }
    }
    printf("The count of numbers not divisible by any of (2, 3, 4, 5, 6, 7, 8, 9, 10) is: %d\n", count);
    return 0;
}

