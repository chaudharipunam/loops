/*

Enter the value of n: 4 
Enter number 1: 12
Enter number 2: 24
Enter number 3: 48
Enter number 4: 80
HCF of the given numbers is: 4

*/

#include <stdio.h>
int main() {
    int n, min_num = 1000000, hcf = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
    }
    for (int i = 1; i <= min_num; i++) {
        int divisible = 1;
        for (int j = 0; j < n; j++) {
            if (numbers[j] % i != 0) {
                divisible = 0;
                break;
            }
        }
        if (divisible) {
            hcf = i;
        }
    }
    printf("HCF of the given numbers is: %d\n", hcf);
    return 0;
}

