#include <stdio.h>

int main()
{
    int n,i,j,tem;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
    }
}
    int p1=a[n-1]*a[n-2];
    int p2=a[0]*a[1];
    if(p1>p2)
        printf("%d",p1);
    else
        printf("%d",p2);
    return 0;
}