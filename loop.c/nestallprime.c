#include <stdio.h>
#include <math.h>
int main() {
    int N, count = 0, num = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (count < N) {
        int is_prime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}

