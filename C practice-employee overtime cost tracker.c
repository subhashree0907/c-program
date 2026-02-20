#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int hours, totalHours = 0, heavyDays = 0;
    int costPerHour = 200;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &hours);
        totalHours += hours;
        
        if (hours > 3) {
            heavyDays++;
        }
    }
    
    int totalCost = totalHours * costPerHour;
    
    printf("Total Overtime Hours: %d\n", totalHours);
    printf("Overtime Cost: %d\n", totalCost);
    printf("Heavy Overtime Days: %d\n", heavyDays);
    
    return 0;
}