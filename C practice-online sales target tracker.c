#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    long revenue, total = 0;
    int targetDays = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%ld", &revenue);
        total += revenue;
        if (revenue > 50000) {
            targetDays++;
        }
    }
    
    printf("Total Revenue: %ld\n", total);
    printf("Target Days: %d\n", targetDays);
    
    return 0;
}