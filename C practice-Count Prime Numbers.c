#include <stdio.h>

int main() {
    int N,i,j,c = 0;
    scanf("%d",&N);
    for(i=2;i<=N;i++) 
    {
        for(j=2;j<i;j++)
            if(i%j==0) 
            break;
        if(j == i) 
        c++;
    }
    printf("%d", c);
    return 0;
}
