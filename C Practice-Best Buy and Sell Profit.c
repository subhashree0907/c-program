#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int maxProfit=a[1]-a[0];
    for(i=1;i<n;i++)
    {
        int profit=a[i]-min;
        if(profit>maxProfit)
        {
            maxProfit=profit;
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",maxProfit);
    return 0;
}