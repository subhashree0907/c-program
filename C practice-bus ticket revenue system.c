#include <stdio.h>

int main()
{
    int N, fare, total = 0;
    scanf("%d", &N);
    
    for(int i=0; i<N; i++);{
        scanf("%d", &fare);
        total += fare;
    }
    printf("Total Collection: $%d\n", total);

    return 0;
}