#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);

    return 0;
}
