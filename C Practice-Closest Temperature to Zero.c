#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int closest=a[0];
    for(i=1;i<n;i++)
    {
        if(abs(a[i])<abs(closest) || (abs(a[i])==abs(closest)&&a[i]>closest))
        {
            closest=a[i];
        }
    }
    printf("%d",closest);
    return 0;
}