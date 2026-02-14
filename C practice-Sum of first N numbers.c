#include <stdio.h>

int main() {
    int a,b ;
    scanf("%d",&a,&b);

    for(int i=1;i<=a;i++) {
        b+=i;
    }

    printf("%d",b);

    return 0;
}
