#include <stdio.h>
#include <math.h>

int main(){
    int a = -5, b = 10, c = 15;
    int max, min;
    int x = -5;

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    int absValue = abs(x);

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    printf("abs(%d) = %d\n", x, absValue);

    return 0;
}
