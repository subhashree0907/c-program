#include <stdio.h>

int main() {
    int maxWeight,N;
    int weight;
    int i=0;
    int peopleEntered=0;
    int currentWeight=0;
    int overload=0;
    scanf("%d",&maxWeight);
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&weight);
        if (currentWeight+weight<=maxWeight) 
        {
            currentWeight+=weight;
            peopleEntered++;
        } else 
        {
            overload=1; 
            break;         
        }
        i++;
    }
    printf("People Entered:%d\n",peopleEntered);
    if(overload) 
    {
        printf("Overload Status:Yes");
    } else 
    {
        printf("Overload Status:No");
    }
    return 0;
}