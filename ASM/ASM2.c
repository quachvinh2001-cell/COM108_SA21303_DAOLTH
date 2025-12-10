#include <stdio.h>
#include <math.h>

int main() {
    int luaChon, a, b, kWh, hoten;
    double x, diem, c = sqrt(x);
    long tien;
    float dtb;
    do {
        printf("---------------------------------------------------\n");
        printf("| WELCOME TO QUACH QUANG VINH'S ASSIGNMENT COM108 |\n");      
        printf("----------------------- MENU ----------------------\n");
        printf("1. Chuong trinh kiem tra so nguyen\n");
        printf("2. Chuong trinh tim so uoc chung va boi chung cua hai so\n");
        printf("3. Chuong trinh tinh tien cho quan karaoke\n");
        printf("4. Chuong trinh tinh tien dien\n");
        printf("5. Chuong trinh doi tien\n");
        printf("6. Chuong trinh tinh lai xuat vay ngan hang tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Chuong trinh sap xep thong tin sinh vien\n");
        printf("9. Chuong trinh xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1: {
    printf("1. Chuong trinh kiem tra so nguyen\nNhap so: ");
    scanf("%lf", &x);
    int n = (int)x;
    if (x == n)  printf("\nDay la so nguyen");
    else         printf("\nDay khong phai so nguyen");
    if (x == n && n > 1) {
        int nt = 1;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) nt = 0;
        if (nt) printf("\nDay la so nguyen to");
        else    printf("\nDay khong phai so nguyen to");
    } else {
        printf("\nKhong the kiem tra nguyen to");
    }
    if (x == n && n >= 0) {
        int c = sqrt(n);
        if (c * c == n) printf("\nDay la so chinh phuong");
        else            printf("\nDay khong phai so chinh phuong");
    } else {
        printf("\nKhong the kiem tra so chinh phuong");
    }

    break;
}
    case 2: printf("2. Chuong trinh tim UCLN va BCNN\n");
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    int a = x, b = y;

    
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }

    int gcd = a;
    int lcm = (x * y) / gcd;

    printf("Uoc so chung lon nhat (GCD): %d\n", gcd);
    printf("Boi so chung nho nhat (LCM): %d\n", lcm);

    break;
    case 3: printf("3. Chuong trinh tinh tien karaoke\n");
            
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if (start < 12 || end > 23 || start >= end) {
        printf("Thoi gian khong hop le!\n");
        
    }

    int gioChoi = end - start;
    int tong = 0;

    if (gioChoi <= 3) {
        tong = 150000;
    } else {
        tong = 150000 + (gioChoi - 3) * 105000;
    }

    
    if (start >= 14 && start <= 17) {
        tong = tong * 0.9;  
    }

    printf("So gio choi: %d\n", gioChoi);
    printf("Tong tien phai tra: %d VND\n", tong);

   
    break;
    case 4: printf("4. Chuong trinh tinh tien dien\n");
            printf("Nhap so kWh: ");
            scanf("%d", &kWh);
            if (kWh <= 50) {
            tien = kWh * 1678;
            } else if (kWh <= 100) {
            tien = 50*1678 + (kWh-50)*1734;
            } else if (kWh <= 200) {
            tien = 50*1678 + 50*1734 + (kWh-100)*2014;
            } else if (kWh <= 300) {
            tien = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
            } else if (kWh <= 400) {
            tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
            } else {
            tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;
            }
            printf("Tien dien: %ld dong\n", tien); 
            break;
            case 5: printf("5. Chuong trinh doi tien\n"); 
            break;
            case 6: printf("6. Chuong trinh tinh lai xuat vay ngan hang tra gop\n");
            double tienVay, laisuat = 0.05;
            printf("Nhap so tien muon vay: ");
            scanf("%lf", &tienVay);

            double gocThang = tienVay / 12;
            double conLai = tienVay;

            printf("\nKy han | Lai phai tra | Goc phai tra | Tong phai tra | So tien con lai\n");
            printf("--------------------------------------------------------------------------\n");

            for (int i = 1; i <= 12; i++) {
            double laiThang = conLai * laisuat;
            double tongThang = laiThang + gocThang;
            conLai -= gocThang;

            printf("%5d | %11.0lf | %12.0lf | %13.0lf | %14.0lf\n",
            i, laiThang, gocThang, tongThang, conLai);
    }
 
            break;
            case 7: printf("7. Chuong trinh vay tien mua xe\n"); 
            break;
           case 8: printf("8. Chuong trinh sap xep thong tin sinh vien\n");
            struct SINHVIEN {
            char hoten[50];
            float dtb;
            };

            struct SINHVIEN SV1, SV2, temp;

   
            printf("Nhap ho ten SV1: ");
            scanf("%s", SV1.hoten);
            getchar();

            printf("Nhap diem SV1: ");
            scanf("%f", &SV1.dtb);

    
            printf("Nhap ho ten SV2: ");
            scanf("%s", SV2.hoten);

            printf("Nhap diem SV2: ");
            scanf("%f", &SV2.dtb);

            
            printf("\n--- DANH SACH SINH VIEN ---\n");

            printf("SV1: %s - %.2f - ", SV1.hoten, SV1.dtb);
            if      (SV1.dtb >= 9)   printf("Xuat sac\n");
            else if (SV1.dtb >= 8)   printf("Gioi\n");
            else if (SV1.dtb >= 6.5) printf("Kha\n");
            else if (SV1.dtb >= 5)   printf("Trung binh\n");
            else                     printf("Yeu\n");

            printf("SV2: %s - %.2f - ", SV2.hoten, SV2.dtb);
            if      (SV2.dtb >= 9)   printf("Xuat sac\n");
            else if (SV2.dtb >= 8)   printf("Gioi\n");
            else if (SV2.dtb >= 6.5) printf("Kha\n");
            else if (SV2.dtb >= 5)   printf("Trung binh\n");
            else                     printf("Yeu\n");

            
            if (SV1.dtb < SV2.dtb) {
                temp = SV1;
                SV1 = SV2;
                SV2 = temp;
            }

            
            

            printf("1. %s - %.2f - ", SV1.hoten, SV1.dtb);
            if      (SV1.dtb >= 9)   printf("Xuat sac\n");
            else if (SV1.dtb >= 8)   printf("Gioi\n");
            else if (SV1.dtb >= 6.5) printf("Kha\n");
            else if (SV1.dtb >= 5)   printf("Trung binh\n");
            else                     printf("Yeu\n");

            printf("2. %s - %.2f - ", SV2.hoten, SV2.dtb);
            if      (SV2.dtb >= 9)   printf("Xuat sac\n");
            else if (SV2.dtb >= 8)   printf("Gioi\n");
            else if (SV2.dtb >= 6.5) printf("Kha\n");
            else if (SV2.dtb >= 5)   printf("Trung binh\n");
            else                     printf("Yeu\n");
            break;
            case 9: printf("9. Chuong trinh game FPOLY-LOTT\n"); 
            break;
            case 10: printf("10. Chuong trinh tinh toan phan so\n"); 
            break;
            case 0: printf("Da thoat chuong trinh.\n"); 
            break;
            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
        printf("\n");
    } while (luaChon != 0);
    return 0;
}
