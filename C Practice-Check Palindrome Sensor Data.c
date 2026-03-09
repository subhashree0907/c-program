#include<stdio.h>
int main()
{
    int n,a[100],i,j=1;
    scanf("%d",&n);
    for(i=0;i,i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
    if(a[i]!=a[n-1-i])
    j=0;
    }
    if(j)
    printf("yes");
    else
    printf("no");
    return 0;
    
