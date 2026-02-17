#include <stdio.h>

int main()
{
    int N;
    int first = 0, second = 1, next;
    scanf("%d", &N);
    
    for(int i=1;i<=N;i++){
        if(i==1){
            printf("%d", first);
        }
        else if(i==2) {
            printf("%d", second);
        }
        else{
            next = first + second;
            printf("%d", next);
            first = second;
            second = next;
            
        }
    }
   return 0;
}