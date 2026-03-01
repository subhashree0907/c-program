#include <stdio.h>

int main() {
    int fuel,N;
    int burn;
    int i;
    int emergencyStage;
    int fuelWasted;
    i=1;
    emergencyStage=0;
    fuelWasted=0;
    scanf("%d",&fuel);
    scanf("%d",&N);
    while(i<=N) 
    {
        scanf("%d",&burn);
        fuel-=burn; 
        if (fuel<0 && emergencyStage==0)
        {
            emergencyStage=i;       
            fuelWasted=-fuel;       
        }
        i++;
    }
    if(emergencyStage==0)
        printf("Emergency Stage:Not Occurred\n");
    else
        printf("Emergency Stage:%d\n",emergencyStage);
    printf("Fuel Wasted:%d",fuelWasted);
    return 0;
}