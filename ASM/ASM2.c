#include <stdio.h>

int main() {
    int luaChon, a, b, kWh;
    double x;
    long tien;
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
            case 1: printf("1. Chuong trinh kiem tra so nguyen\n");
            printf("Nhap so: ");
            scanf("%lf", &x);
            if ((int)x == x) {printf("Day la so nguyen");}
            else {printf("Day khong phai la so nguyen");}            
            break;
            case 2: printf("2. Chuong trinh tim UCLN va BCNN\n");
            break;
            case 3: printf("3. Chuong trinh tinh tien karaoke\n"); 
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
            break;
            case 7: printf("7. Chuong trinh vay tien mua xe\n"); 
            break;
            case 8: printf("8. Chuong trinh sap xep thong tin sinh vien\n");
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
