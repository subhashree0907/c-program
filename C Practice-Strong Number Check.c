#include <stdio.h>

int main() {
    int N,temp,digit,i,fact,sum=0;
    scanf("%d",&N);
    temp=N;
    for(;temp>0;temp/=10)
    {
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++)
            fact*=i;
        sum+=fact;
    }
    printf(sum==N ?"Yes":"No");
    return 0;
}
