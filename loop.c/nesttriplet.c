/*

Enter the value of N: 10
The count of triplets whose sum is equal to 10 is 4.

*/

#include <stdio.h>

int main() {
    int N, count = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int A = 1; A <= N - 2; A++) {
        for (int B = A + 1; B <= N - 1; B++) {
            int C = N - (A + B);
            if (C > B && C <= N) {
                count++;
            }
        }
    }

    printf("The count of triplets whose sum is equal to %d is %d.\n", N, count);

    return 0;
}

