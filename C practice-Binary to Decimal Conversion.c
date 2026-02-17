#include <stdio.h>

int main() {
    int N,digit,i;
    int decimal=0,base=1;
    scanf("%d", &N);
    for(;N>0;N=N/10) 
    {
        digit=N%10;
        decimal=decimal+digit*base;
        base=base*2;
    }
    printf("%d", decimal);
    return 0;
}
