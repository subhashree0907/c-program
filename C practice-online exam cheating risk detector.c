#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int score, totalRisk = 0, highRiskSessions = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        totalRisk += score;
        if (score > 50) {
            highRiskSessions++;
        }
    }
    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d\n", highRiskSessions);
    
    return 0;
}