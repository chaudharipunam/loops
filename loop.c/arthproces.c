/*

Find the sum of an arithmetic prograssion using a loop. Input first term a, common difference d, and number of terms n from the user


*/

#include <stdio.h>

int main() {
    int a, d, n, sum = 0;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += a;
        a += d;
         printf("The sum of the arithmetic progression is: %d\n", sum);
    }

    return 0;
}

