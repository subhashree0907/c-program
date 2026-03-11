#include <stdio.h>
int main()
{
    int r,c,a[10][10],i,j,k,l,max=0,val;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int count=0;
            for(k=0;k<r;k++)
                for(l=0;l<c;l++)
                    if(a[i][j]==a[k][l])
                        count++;
            if(count>max)
            {
                max=count;
                val=a[i][j];
            }
        }
    }
    printf("%d",val);
    return 0;
}
