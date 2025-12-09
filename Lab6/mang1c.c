#include <stdio.h>
#define N 100
//dinh nghia ham
void nhapmang(int a[N], int n);
void xuatmang(int a[N], int n);
int tongmang(int a[N], int n);
void BubbleSoft(int a[N], int n);
//ham nhập mảng 1 chiều
void nhapmang(int a[N], int n){
    printf("Nhap phan tu");
    for(int i = 0; i<n; i++){
        printf("a[%d]", i);
        scanf("%d", &a[i]);
   } 
}
// xuất mang 1 chiều
void xuatmang(int a[N], int n){
    printf("Xuat phan tu: ");
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
   } 
}
// tính tổng số phần tử của mảng
int tongmang(int a[N], int n){
    printf("Xuat tong mang: ");
    int tong = 0;
    for(int i = 0; i<n; i++){
        tong += a[i];
   }
   return tong;
}
void BubbleSoft(int a[N], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j]){
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n, a[N];
    //int a[5] = {1,2,3,4,5};
    /*int a[4][5] ={
        {1,2,3,4,5},
        {3,4,5,6,7},
        {3,5,7,6,7},
        {3,4,5,6,7}
    };*/
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\nTong mang: %d",tongmang(a,n));
    //Sap xep mang tang dan
    BubbleSoft(a,n);
    xuatmang(a,n);
    return 0;
}

