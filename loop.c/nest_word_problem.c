/*

answer is:-
Total revenue from all possible sales: $23100 
*/

#include <stdio.h>
int main() {
    int chocolate_bars = 20;
    int candy_bags = 10;
    int total_revenue = 0;
    int price_per_combination = 2;  
    for (int bars = 0; bars <= chocolate_bars; bars++) {
        for (int bags = 0; bags <= candy_bags; bags++) {
            int revenue = bars * bags * price_per_combination;
            total_revenue += revenue;
        }
    }
    printf("Total revenue from all possible sales: $%d\n", total_revenue);
    return 0;
}

