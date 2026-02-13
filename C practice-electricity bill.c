#include <stdio.h>

int main()
{
    int bill, units;
    scanf("%d", &bill,&units);
    
    if(units <=200){
        bill = units*5;
    }
    else if(units <= 400){
        bill = (200 * 5) + (units -200)*6;
    }
    else{
        bill = (200*5) + (200*6) +(units - 400) * 8;
    }
    printf("Bill amount = Rs. %d",bill);

    return 0;
}