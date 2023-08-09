/*

Enter the values of M and N: 10
20
Composite numbers between 10 and 20 are: 10 12 14 15 16 18 20 

*/

#include <stdio.h>
int isComposite(int num) {
    if (num <= 1) {
        return 0;
    }
    int factors = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            factors++;
        }
    }
    return factors > 0;
}
int main() {
    int M, N;
    printf("Enter the values of M and N: ");
    scanf("%d %d", &M, &N);
    printf("Composite numbers between %d and %d are: ", M, N);
    for (int i = M; i <= N; i++) {
        if (isComposite(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

