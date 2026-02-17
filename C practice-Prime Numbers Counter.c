#include <stdio.h>

int main() {
    int N,i,j,count=0;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        for(j=2;j<i;j++) {
            if(i%j==0)
                break;
        }
        if(j==i)
            count++;
    }
    printf("%d",count);
    return 0;
}
