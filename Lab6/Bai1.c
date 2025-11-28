#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }

    if (count > 0) {
        float avg = (float)sum / count;
        printf("Trung binh cac so chia het cho 3 = %.2f\n", avg);
    } else {
        printf("Khong co so chia het cho 3 trong mang.\n");
    }

    return 0;
}
