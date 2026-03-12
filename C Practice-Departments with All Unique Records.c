#include <stdio.h>

int main()
{
    int r, c,a[100][100];
    int count=0;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++)
    {
        int unique=1;

        for(int j=0;j<c;j++)
        {
            for(int k=j+1;k<c;k++)
            {
                if(a[i][j]==a[i][k])
                    unique=0;
            }
        }
        if(unique)
            count++;
    }
    printf("%d",count);
    return 0;
}