#include <stdio.h>
int main()
{
    int r,c,a[10][10],i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int max=0,row=0;
    for(i=0;i<r;i++)
    {
        int p=1;
        for(j=0;j<c;j++)
            p=p*a[i][j];
        if(i==0||p>max)
        {
            max=p;
            row=i;
        }
    }
    printf("%d",row);
}