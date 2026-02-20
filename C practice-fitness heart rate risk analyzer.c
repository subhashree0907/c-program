#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int rate, maxRate, danger = 0;

    scanf("%d", &rate);
    maxRate = rate;
    if (rate > 140) danger++;

    for (int i = 1; i < N; i++) {
        scanf("%d", &rate);
        if (rate > maxRate) maxRate = rate;
        if (rate > 140) danger++;
    }

    printf("Max Heart Rate: %d\n", maxRate);
    printf("Danger Readings: %d\n", danger);

    return 0;
}