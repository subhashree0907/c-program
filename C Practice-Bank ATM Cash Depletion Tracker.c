#include <stdio.h>

int main() {
    int ATMcash,N;
    int withdraw;
    int i=0;
    int success=0;
    scanf("%d",&ATMcash);
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&withdraw);
        if(ATMcash>=withdraw)
        {
            ATMcash=ATMcash-withdraw;
            success++;
        } else 
        {
            break;   
        }
        i++;
    }
    printf("Successful Withdrawals:%d\n",success);
    printf("Remaining Cash:%d",ATMcash);
    return 0;
}