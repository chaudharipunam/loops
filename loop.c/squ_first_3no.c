/*

Construct a flowchart to find a series of five consecutive numbers, the sum of the squares of the first three of which is equal to the sum of the squares of the last two. For example,
(– 2)2 + (– 1)2 + 02 = 12 + 22

Answer is:-
             Series: -2, -1, 0, 1, 2

*/

#include <stdio.h>
int main() {
    int n;
    for (n = -2; n <= 100; n++) {
        int sum_first_three=n*n+(n+1)*(n+1)+(n+2)*(n+2);
        int sum_last_two=(n+3)*(n+3)+(n+4)*(n+4);
        if (sum_first_three==sum_last_two) {
          printf("Series: %d, %d, %d, %d, %d\n",n,n+1,n+2,n+3,n+ 4);
            break; 
        }
    }
    return 0;
}

