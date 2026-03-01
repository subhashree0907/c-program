#include <stdio.h>

int main() {
    int dataPack,N;
    int usage;
    int i=1;
    int exhaustedDay=0;
    int overused=0;
    scanf("%d",&dataPack);
    scanf("%d",&N);
    while(i<=N) 
    {
        scanf("%d",&usage);
        dataPack=dataPack-usage;
        if(dataPack<=0 && exhaustedDay==0)
        {
            exhaustedDay=i;
            if (dataPack<0)
            {
                overused=-dataPack;
            }
        }
        i++;
    }
    if(exhaustedDay==0)
    {
        printf("Exhausted Day:Not Exhausted\n");
        printf("Overused Data:0");
    } else 
    {
        printf("Exhausted Day:%d\n",exhaustedDay);
        printf("Overused Data:%d",overused);
    }
    return 0;
}