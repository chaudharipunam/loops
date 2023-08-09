/*

Enter the value of N: 12
Enter the value of K: 2
The 2th largest factor of 12 is: 6

*/

#include <stdio.h>
int findKthLargestFactor(int num, int k) {
    int count = 0;
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            count++;
            if (count == k) {
                return i;
            }
        }
    }
    return -1;  // If k is greater than the number of factors
}
int main() {
    int N, K;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the value of K: ");
    scanf("%d", &K);
    int kthLargestFactor = findKthLargestFactor(N, K);
    if (kthLargestFactor != -1) {
        printf("The %dth largest factor of %d is: %d\n", K, N, kthLargestFactor);
    } else {
        printf("The value of K is greater than the number of factors.\n");
    }
    return 0;
}

