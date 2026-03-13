#include <stdio.h>

int isPrime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main() 
{
    int r,c,a[100][100],count=0;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) 
    {
        int allPrime=1;
        for(int j=0;j<c;j++)
        {
            if(!isPrime(a[i][j])) 
            {
                allPrime=0;
                break;
            }
        }
        if(allPrime)
            count++;
    }
    printf("%d",count);
    return 0;
}