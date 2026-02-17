#include <stdio.h>

int main() {
    int N,i,s=0;
    scanf("%d",&N);
    for(i=1;i<=N/2;i++)
        if(N%i==0)
            s+=i;
    printf(s==N?"Yes":"No");
    return 0;
}
