#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int errors, total = 0, critical = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &errors);
        total += errors;
        if (errors > 50) {
            critical++;
        }
    }
    
    printf("Total Errors: %d\n", total);
    printf("Critical Hours: %d\n", critical);
    
    return 0;
}