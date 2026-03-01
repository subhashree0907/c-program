#include <stdio.h>
int main() {
    
    int N,totalData;
    int usage;
    int i=0;
    int daysUsed = 0;
    scanf("%d",&totalData);
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&usage);
        if (totalData>=usage) {
            totalData=totalData-usage;
            daysUsed++;
        } else 
        {
            break;
        }
        i++;
    }
    printf("Days Used:%d \n",daysUsed);
    printf("Remaining Data:%dGB \n", totalData);
    return 0;
}