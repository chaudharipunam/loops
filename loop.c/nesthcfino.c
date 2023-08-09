#include <stdio.h>
int calculateHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int hcf = numbers[0];
    for (int i = 1; i < n; i++) {
        hcf = calculateHCF(hcf, numbers[i]);
    }
    printf("The HCF of the given numbers is: %d\n", hcf);
    return 0;
}

       

