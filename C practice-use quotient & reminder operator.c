#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int a = x;
    int b = x;

    a /= y;
    b %= y;

    printf("%d %d\n", a, b);
    return 0;
}
