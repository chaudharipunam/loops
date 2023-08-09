#include <stdio.h>

int main() {
    int N, count = 0, num = 2;
    int is_prime;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (count < N) {
        is_prime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d\n ", num);
            count++;
        }
        num++;
    }
    
    return 0;
}

