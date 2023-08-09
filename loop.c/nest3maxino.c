/*

3rd max in given number:=
 
Enter the value of N: 5
Enter number 1: 12
Enter number 2: 23
Enter number 3: 43
Enter number 4: 2
Enter number 5: 19
Third maximum is: 19


*/

#include <stdio.h>
int main() {
    int N, max1 = -1000000, max2 = -1000000, max3 = -1000000;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int numbers[N];
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2 && numbers[i] != max1) {
            max3 = max2;
            max2 = numbers[i];
        } else if (numbers[i] > max3 && numbers[i] != max2 && numbers[i] != max1) {
            max3 = numbers[i];
        }
    }
    printf("Third maximum is: %d\n", max3);
    return 0;
}

