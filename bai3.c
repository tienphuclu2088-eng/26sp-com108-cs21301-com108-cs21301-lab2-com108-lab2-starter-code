/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
int ban_kinh; 
    float chu_vi, dien_tich; 
    printf("Nhap ban kinh hinh tron:");
    scanf("%d", &ban_kinh);        
    chu_vi =  2 * 3.14 * ban_kinh; 
    dien_tich = 3.14 * ban_kinh * ban_kinh; 
    printf("Chu vi hinh tron la: %.2f\n", chu_vi);
    printf("Dien tich hinh tron la: %.2f\n", dien_tich); 
    return 0;
}   