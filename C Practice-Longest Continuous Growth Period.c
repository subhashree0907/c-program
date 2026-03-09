#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=1,c=1;
    for(i=1;i<n;i++) {
        if(a[i]>a[i-1])
        {
            b++;
        }else
        {
            b=1;
        }
        if(b>c)
        {
           c=b;
        }
    }
    printf("%d",c);
    return 0;
}