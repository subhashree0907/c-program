#include <stdio.h>

int main() {
    int N,temp,digit;
    int sum=0;
    scanf("%d",&N);
    temp=N;
    for(;temp!=0;temp/=10)
    {
        digit=temp%10;
        sum=sum+digit*digit*digit;
    }
    if(sum==N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
