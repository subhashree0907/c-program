#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int prev,curr;
    int i=1;
    int totalDrops=0;
    int consecutive=0;
    int crashDay=0;
    scanf("%d",&prev); 
    while(i<N) 
    {
        scanf("%d",&curr);
        if(curr<prev) 
        {
            totalDrops++;
            consecutive++;
            if(consecutive==3 && crashDay==0) 
            {
                crashDay=i+1; 
            }
        }else
        {
            consecutive=0; 
        }
        prev=curr;
        i++;
    }
    if(crashDay==0)
        printf("Crash Day:Not Detected\n");
    else
        printf("Crash Day:%d\n",crashDay);
    printf("Total Drops:%d",totalDrops);
    return 0;
}