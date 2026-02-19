#include <stdio.h>

int main() {
    int N, patients, total = 0, overcrowdedDays = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &patients);
        total += patients;
        if (patients > 100) {
            overcrowdedDays++;
        }
    }
    
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d\n", overcrowdedDays);
    
    return 0;
}