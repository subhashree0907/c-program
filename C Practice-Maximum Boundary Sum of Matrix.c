#include <stdio.h>

int main() {
    int r,c,sum=0;
    scanf("%d %d",&r,&c);
    int a[100][100];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int j=0;j<c;j++)
        sum+=a[0][j];
    for(int j=0;j<c;j++)
        sum+=a[r-1][j];
    for(int i=1;i<r-1;i++)
        sum+=a[i][0];
    for(int i=1;i<r-1;i++)
        sum+=a[i][c-1];
    printf("%d",sum);
    return 0;
}