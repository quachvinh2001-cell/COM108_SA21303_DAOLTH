#include <stdio.h>
#include <string.h>
int main(){
    /*char s[100];
    printf("xin moi nhap vao chuoi: ");//Bai 1 XAY DUNG CHUONG TRINH DEM NGUYEN AM VA PHU AM CUA 1 CHUOI
    scanf("%s", &s);
    int i = 0;
    int n = 0;
    int p = 0;
    while(s[i++] != '\0'){
        if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='u'||s[i]=='o'){ 
            n++;
        }else{
            p++;
        }
        i++;
    }printf("chuoi %s co chua: %d nguyen am va %d phu am", s, n, p);*/
    char a[40], b[40];
    printf("nhap vao USERNAME");
    scanf("%s", &a);
    printf("\nnhap vao PASSWORD");
    scanf("%s", &b);
    if(strcmp(a,b)== 0){
        printf("dang nhap thanh cong");
    }else{
        printf("dang nhap khong thanh cong");
    }
    return 0;
}