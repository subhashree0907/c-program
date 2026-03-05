#include <stdio.h>

int main()
{
    int n,k,i;
    scanf("%d",&n);
    int arr[100];
    for(i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=k;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}