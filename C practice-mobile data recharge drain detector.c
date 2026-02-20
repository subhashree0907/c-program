#include <stdio.h>

int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    
    int usage, successfulDays = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &usage);
        
        if (totalData >= usage) {
            totalData -= usage;
            successfulDays++;
        } else {
            totalData -= usage;
            break;
        }
    }
    
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d\n", successfulDays);
    
    return 0;
}