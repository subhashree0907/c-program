#include <stdio.h>

int main() {
    int N,amount;
    int i=1;
    int highValueCount=0;
    int consecutiveHigh=0;
    int fraudAttempt=0;
    scanf("%d",&N);
    while(i<=N) 
    {
        scanf("%d",&amount);
        if(amount>=50000)
        {
            highValueCount++;        
            consecutiveHigh++;       
            if(consecutiveHigh==3 && fraudAttempt==0)
            {
                fraudAttempt=i;   
        }
        } else 
        {
            consecutiveHigh=0;     
        }

        i++;
    }

    if(fraudAttempt==0)
        printf("Fraud Triggered At Attempt:Not Triggered\n");
    else
        printf("Fraud Triggered At Attempt:%d\n",fraudAttempt);
    printf("High-Value Transactions:%d",highValueCount);
    return 0;
}