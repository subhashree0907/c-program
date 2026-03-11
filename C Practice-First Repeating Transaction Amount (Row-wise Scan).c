#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int a[100][100];
    int seen[1000]={0};  
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int val=a[i][j];
            if(seen[val]==1)
            {
                printf("%d",val);
                return 0;
            }
            seen[val]=1;
        }
    }
    return 0;
}