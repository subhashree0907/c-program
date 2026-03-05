#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    float avg;
    int count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}