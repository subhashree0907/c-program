#include <stdio.h>

int main() {
    int fuel,N;
    int tripFuel;
    int i=0;
    int completed=0;

    scanf("%d",&fuel);
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&tripFuel);
        if(fuel>=tripFuel) 
        {
            fuel=fuel-tripFuel;
            completed++;
        } else 
        {
            break; 
        }
        i++;
    }
    printf("Completed Trips:%d \n",completed);
    printf("Remaining Fuel:%d",fuel);
    return 0;
}