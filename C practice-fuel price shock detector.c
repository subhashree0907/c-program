#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int price, highest = 0, count = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &price);
        
        if (price > highest) {
            highest = price;
        }
        if (price > 100) {
            count++;
        }
    }
    
    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d\n", count);
    
    return 0;
}