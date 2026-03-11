#include <stdio.h>
int main() {
    int r, c, a[10][10];
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int maxSum=0,colIndex=0;
    for(int j=0;j<c;j++) 
    {
        int sum=0;
        for(int i=0;i<r;i++)
            sum+=a[i][j];
        if(j ==0||sum>maxSum)
        {
            maxSum=sum;
            colIndex=j;
        }
    }
    printf("%d",colIndex);
    return 0;
}