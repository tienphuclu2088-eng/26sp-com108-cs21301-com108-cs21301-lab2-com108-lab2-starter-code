/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
   int a, b; // Khai báo biến để lưu 2 số nguyên
    int tong,hieu; // Khai báo biến để lưu tổng, hiệu
    a=4;
    b=7;
    tong = a + b; // Tính tổng
    hieu = a - b; // Tính hiệu
    printf("Tong cua %d va %d la: %d\n", a, b, tong); // In ra tổng
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu); // In ra hiệu
    return 0;
}
