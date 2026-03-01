#include <stdio.h>
int main() {
    int N;
    int order;
    int i=0;
    int successful=0;
    int cancelled=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&order);
        if(order==1)
        {
            successful++;   
        } else if(order==0) 
        {
            cancelled++;    
        }
        i++;
    }
    printf("Successful:%d \n",successful);
    printf("Cancelled:%d \n",cancelled);
    if(cancelled>successful)
    {
        printf("Status:Risk \n");
    }else
    {
        printf("Status:Safe \n");
    }
    return 0;
}