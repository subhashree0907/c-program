#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int attempt;
    int i=1;
    int consecutiveFailures=0;
    int totalFailures=0;
    int lockAt=0;
    while(i<=N)
    {
        scanf("%d",&attempt);
        if(attempt==0) 
        {
            totalFailures++;
            consecutiveFailures++;
            if(consecutiveFailures==3 && lockAt==0)
            {
                lockAt=i;  
            }
        }else 
        {
            consecutiveFailures=0; 
        }
        i++;
    }
    if(lockAt==0)
        printf("Lock Triggered At Attempt:Not Locked\n");
    else
        printf("Lock Triggered At Attempt:%d\n",lockAt);
    printf("Total Failed Attempts:%d",totalFailures);
    return 0;
}