#include <stdio.h>

int main() {
    int rows = 5;
    int num = 577;

    for (int i = 0; i < rows; i++) {
        int currentNum = num;
        
        for (int j = 0; j <= i; j++) {
            printf("%d ", currentNum);
            currentNum -= 47;
        }
        
        printf("\n");
        num -= 87;  // Decrement the initial num for the next row
    }

    return 0;
}


