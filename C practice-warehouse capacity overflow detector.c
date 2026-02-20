#include <stdio.h>

int main() {
    int capacity, N;
    scanf("%d", &capacity);
    scanf("%d", &N);
    
    int items, overflowDays = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &items);
        capacity -= items;
        if (capacity < 0) {
            overflowDays++;
        }
    }
    
    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d\n", overflowDays);
    
    return 0;
}