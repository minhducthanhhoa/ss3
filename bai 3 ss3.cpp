#include <stdio.h>
int main(){
    float diemToan, diemVan, diemAnh;
    
    printf("Nhap diem toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem van: ");
    scanf("%f", &diemVan);
    printf("Nhap diem anh: ");
    scanf("%f", &diemAnh);
    
    float tongDiem = diemToan + diemVan + diemAnh;
    float diemTrungBinh = tongDiem / 3;
    
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}

