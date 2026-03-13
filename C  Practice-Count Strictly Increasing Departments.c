#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[100][100];
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        int increasing=1;
        for(int j=1;j<c;j++) 
        {
            if(a[i][j]<=a[i][j-1])
            {
                increasing=0;
                break;
            }
        }
        if(increasing)
            count++;
    }
    printf("%d",count);

    return 0;
}