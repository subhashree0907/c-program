#include <stdio.h>

int main()
{
    int n,i,j,a=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(b[i]==b[j])
                break;
        }
        if(i==j)
            a++;
    }
    printf("%d",a);
    return 0;
}