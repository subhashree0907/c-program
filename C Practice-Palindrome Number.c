#include <stdio.h>

int main() {
    int N,r,t;
    scanf("%d",&N);
    t=N;
    for(;t>0;t/=10)
        r=r*10+t%10;
    printf(r==N ?"Yes":"No");
    return 0;
}
