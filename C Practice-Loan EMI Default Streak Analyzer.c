#include <stdio.h>

int main() {
    int N,num;
    int i=0;
    int maxStreak=0,currentStreak=0;
    scanf("%d",&N);
    while(i<N) 
    {
        scanf("%d",&num);
        if(num==0) 
        {
            currentStreak++;
            if(currentStreak>maxStreak)
            {
                maxStreak=currentStreak;
            }
        }else
        {
            currentStreak=0;
        }
        i++;
    }
    printf("Longest Default Streak:%d",maxStreak);
    return 0;
}