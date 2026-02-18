#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int amount;
    int total=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&amount);
        total=total+amount;
    }
    if(total>10000)
    {
        printf("Limit Exceeded");
    } 
    else {
        printf("Approved");
    }
    return 0;
}
