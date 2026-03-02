#include <stdio.h>

int main() {
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {          
        ch='E'-i;                 
        for(j=0;j<=i;j++)
        {     
            printf("%c ",ch+j);    
        }
        printf("\n");
    }
    return 0;
}