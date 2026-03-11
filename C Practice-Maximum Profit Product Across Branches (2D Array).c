#include <stdio.h>

int main()
{
    int R,C;
    scanf("%d %d",&R,&C);
    int a[10][10];
    int max=-9999;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            for(int k=i+1;k<R;k++)
            {
                for(int l=0;l<C;l++)
                {
                    int p=a[i][j]*a[k][l];
                    if(p>max)
                        max=p;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}s