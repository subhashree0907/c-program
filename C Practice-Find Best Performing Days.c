#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[100],temp[100];
    int count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    temp[count]=max;
    count++;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            temp[count]=max;
            count++;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d ",temp[i]);
    }

    return 0;
}