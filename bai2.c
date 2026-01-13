/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
   int chieu_dai, chieu_rong; // Khai báo biến để lưu chiều dài, chiều rộng
    int chu_vi, dien_tich; // Khai báo biến để lưu chu vi,
    printf("Nhap chieu dai hinh chu nhat:");
    scanf("%d", &chieu_dai); // Nhập chiều dài
    printf("Nhap chieu rong hinh chu nhat:");
    scanf("%d", &chieu_rong); // Nhập chiều rộng
    chu_vi =  (chieu_dai + chieu_rong)*2; // Tính chu vi
    dien_tich = chieu_dai * chieu_rong; // Tính diện
    printf("Chu vi HCN la: %d\n", chu_vi); // In ra chu vi
    printf("Dien tich HCN la: %d\n", dien_tich); // In ra diện tích
    return 0;
}


