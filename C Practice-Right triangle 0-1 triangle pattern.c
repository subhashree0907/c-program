#include <stdio.h>

int main() {
    int i, j;
    int start;
    for(i=1;i<=5;i++) 
    {
        if(i%2==0)
            start=0;   
        else
            start=1;  

        for(j=1;j<=i;j++)
        {
            printf("%d ",start);
            start=1-start;   
        }
        printf("\n");
    }
    return 0;
}