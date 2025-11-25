#include <stdio.h>

int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int x, y, z;

    printf("Nhap so thu 1: ");
    scanf("%d", &x);

    printf("Nhap so thu 2: ");
    scanf("%d", &y);

    printf("Nhap so thu 3: ");
    scanf("%d", &z);

    printf("So lon nhat la: %d", timMax(x, y, z));

    return 0;
}
