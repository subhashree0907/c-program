#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num %3==0 && num %7==0){
        printf("Multiple of both 3 & 7");
    }
    else{
        printf("Not Multiple of both 3 & 7");
    }
}