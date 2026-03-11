#include <stdio.h>
#include <limits.h>

int main()
{
    int R,C,i,j;
    scanf("%d%d",&R,&C);
    int a[R][R];
    int max1=INT_MIN,max2=INT_MIN;
    for(i=0;i<C;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>max1)
            {
                max2=max1;
                max1=a[i][j];
            }
            else if(a[i][j]>max2 && a[i][j]!=max1)
            {
                max2=a[i][j];
            }
        }
    }
    printf("%d",max2);
    return 0;
}