#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int voltage, minVoltage, lowEvents = 0;
    scanf("%d", &voltage);
    minVoltage = voltage;
    if (voltage < 210) {
        lowEvents++;
    }
    
    for (int i = 1; i < N; i++) {
        scanf("%d", &voltage);
        
        if (voltage < minVoltage) {
            minVoltage = voltage;
        }
        if (voltage < 210) {
            lowEvents++;
        }
    }
    
    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d\n", lowEvents);
    
    return 0;
}