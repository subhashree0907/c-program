#include <stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   if (a>0){
       printf("Positive number");
   }
   if(a<0){
       printf("Negative number");
   }
   if(a==0){
       printf("Zero");
   }
   return 0;
}