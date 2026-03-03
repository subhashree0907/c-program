#include <stdio.h>

int main() {
    int N,i,num;
    int sum=0,total;
    scanf("%d",&N);
    total=N*(N+1)/2;
    for(i=0;i<N-1;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",total-sum);
    return 0;
}