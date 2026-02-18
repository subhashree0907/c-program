#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int expense;
    int total=0;
    int overspend=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&expense);
        total+=expense;
        if(expense>1000) 
        {
            overspend++;
        }
    }
    printf("Total Expense:%d \n",total);
    printf("Overspend Days:%d \n",overspend);
    return 0;
}
