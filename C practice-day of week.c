#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);
    
    switch(day){
        case 1:
            printf("Monday \n");
        break;
        
        case 2:
            printf("Thusday \n");
        break;
        
        case 3:
            printf("Wednesday \n");
        break;
        
        case 4:
            printf("Thersday \n");
        break;
        
        case 5:
            printf("Friday \n");
        break;
        
        case 6:
            printf("Saturday \n");
        break;
        
        case 7:
            printf("Sunday \n");
        break;
    default:
        printf("invaled input");
        
        
    }
    return 0;
}