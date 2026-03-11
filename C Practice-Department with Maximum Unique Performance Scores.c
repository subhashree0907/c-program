#include <stdio.h>

int main()
{
    int r,c,a[10][10];
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int max=0,ans=0;
    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            int flag=1;
            for(int k=j+1;k<c;k++)
            {
                if(a[i][j]==a[i][k])
                    flag=0;
            }
            if(flag)
                count++;
        }
        if(count>max)
        {
            max=count;
            ans=i;
        }
    }
    printf("%d",ans);
}