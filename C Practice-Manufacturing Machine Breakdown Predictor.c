#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int vibration;
    int i=1;
    int consecutiveUnsafe=0;
    int unsafeCount=0;
    int breakdownAt=0;
    while(i<=N) 
    {
        scanf("%d",&vibration);
        if(vibration>70)
        {
            unsafeCount++;
            consecutiveUnsafe++;
            if(consecutiveUnsafe==3 && breakdownAt==0)
            {
                breakdownAt=i;  
                }
        }else 
        {
            consecutiveUnsafe=0; 
        }
        i++;
    }
    if(breakdownAt==0)
        printf("Breakdown At Reading:Not Occurred\n");
    else
        printf("Breakdown At Reading:%d\n",breakdownAt);
    printf("Unsafe Readings:%d",unsafeCount);
    return 0;
}