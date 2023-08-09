/*

print max min in given number :-

Enter the value of n: 10
Enter number 1: 12
Enter number 2: 34
Enter number 3: 2
Enter number 4: 19
Enter number 5: 67
Enter number 6: 30
Enter number 7: 45
Enter number 8: 13
Enter number 9: 1
Enter number 10: 56

Maximum number is: 67
Minimum number is: 1

*/

#include <stdio.h>
int main() {
    int n, max_num = -1000000, min_num = 1000000;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
    }
    printf("Maximum number is: %d\n", max_num);
    printf("Minimum number is: %d\n", min_num);
    return 0;
}

