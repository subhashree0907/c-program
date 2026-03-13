#include <stdio.h>

int main()
{
    int r,c,a[50][50],max=0,idx=0;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++)
    {
        int len=1;
        for(int j=0;j<c-1;j++)
            if(a[i][j]%2!=a[i][j+1]%2) len++;
        if(len>max){ max=len; idx=i; }
    }
    printf("%d",idx);
return 0;
}