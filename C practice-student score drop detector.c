#include <stdio.h>

int main() {
    int N, score, total = 0, failedSubjects = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        total += score;
        if (score < 40) {
            failedSubjects++;
        }
    }
    int average = total / N;
    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d\n", failedSubjects);
    
    return 0;
}