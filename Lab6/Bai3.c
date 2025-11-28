#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sắp xếp giảm dần
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
