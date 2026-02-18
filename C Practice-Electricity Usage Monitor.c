#include <stdio.h>

int main() {
    int N;
    int units;
    int total=0;
    scanf("%d %d",&N,&units);
    for(int i=0;i<N;i++) 
    {
        total=total+units;
    }
    printf("Total Units:%d",total);
    return 0;
}
