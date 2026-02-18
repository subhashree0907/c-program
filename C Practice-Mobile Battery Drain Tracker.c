#include <stdio.h>

int main() {
    int battery,N,x;
    scanf("%d",&battery);
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&x);
        battery=battery-x; 
    }
    printf("Remaining Battery:%d%%",battery);
    return 0;
}
