#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num <=100 && num >=90){
        printf("Grade A");
    }
    else if(num <90 && num >=75){
        printf("Grade B");
    }
    else{
        printf("Gread C");
    }
    return 0;
}
