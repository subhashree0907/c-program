#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int delay, total = 0, delayedCount = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &delay);
        total += delay;
        
        if (delay > 30) {
            delayedCount++;
        }
    }
    
    printf("Total Delay: %d\n", total);
    printf("Delayed Deliveries: %d\n", delayedCount);
    
    return 0;
}