#include <stdio.h>

int main() {
    int N;
    int power;
    int i=0;
    int maxUsage=0;
    int surgeHours=0;
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&power);
        if(i==0) 
        {
            maxUsage=power;
        }
        if(power>maxUsage)
        {
            maxUsage=power;
        }
        if(power>5)
        {
            surgeHours++;
        }
        i++;
    }
    printf("Max Usage:%d\n",maxUsage);
    printf("Surge Hours:%d",surgeHours);
    return 0;
}