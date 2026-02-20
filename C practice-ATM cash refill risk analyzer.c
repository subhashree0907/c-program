#include <stdio.h>

int main() {
    int initialCash, N;
    scanf("%d", &initialCash);
    scanf("%d", &N);
    
    int withdrawal, remaining = initialCash, riskCount = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &withdrawal);
        remaining -= withdrawal;
       
        if (remaining < 5000) {
            riskCount++;
        }
    }
    
    printf("Remaining Cash: %d\n", remaining);
    printf("Risk Count: %d\n", riskCount);
    
    return 0;
}