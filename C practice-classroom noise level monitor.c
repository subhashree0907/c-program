#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int noise, maxNoise, noisyPeriods = 0;
    scanf("%d", &noise);
    maxNoise = noise;
    
    if (noise > 70) {
        noisyPeriods++;
    }
    
    for (int i = 1; i < N; i++) {
        scanf("%d", &noise);
        
        if (noise > maxNoise) {
            maxNoise = noise;
        }
        
        if (noise > 70) {
            noisyPeriods++;
        }
    }
    
    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d\n", noisyPeriods);
    
    return 0;
}