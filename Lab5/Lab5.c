#include <stdio.h>

// ======= BAI 1: HAM MIN – MAX =======
int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

// ======= BAI 2: NAM NHUAN =======
int namNhuan(int year) {
    if (year % 400 == 0) return 1;
    if (year % 4 == 0 && year % 100 != 0) return 1;
    return 0;
}

// ======= MAIN =======
int main() {
    // ---- Bai 1 ----
    int x, y, z;
    printf("Bai 1: Tim min va max trong 3 so\n");
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Max = %d\n", max3(x, y, z));
    printf("Min = %d\n", min3(x, y, z));

    // ---- Bai 2 ----
    int year;
    printf("\nBai 2: Kiem tra nam nhuan\n");
    printf("Nhap nam: ");
    scanf("%d", &year);
    if (namNhuan(year))
        printf("Nam %d la nam nhuan\n", year);
    else
        printf("Nam %d khong phai nam nhuan\n", year);

    // ---- Bai 3 ----
    int n;
    printf("\nBai 3: Kiem tra so chia het cho 5 va 9\n");
    printf("Nhap so [1..1000]: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000)
        printf("So nam ngoai khoang 1..1000\n");
    else if (n % 5 == 0 && n % 9 == 0)
        printf("%d chia het cho 5 va 9\n", n);
    else
        printf("%d KHONG chia het cho 5 va 9\n", n);

    return 0;
}
