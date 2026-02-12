#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num <=999 && num >=100){
        printf("Three digit number");
    }
    else {
        printf("Not a three digit number");
    }
    return 0;
}
