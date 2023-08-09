/*

  2nd max in given number:-
Enter the value of N: 5
Enter number 1: 23
Enter number 2: 45
Enter number 3: 65
Enter number 4: 1
Enter number 5: 32
Second maximum is: 45

*/

#include <stdio.h>
int main() {
    int N, max1 = -1000000, max2 = -1000000;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > max1) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2 && numbers[i] != max1) {
            max2 = numbers[i];
        }
    }
    printf("Second maximum is: %d\n", max2);
    return 0;
}

