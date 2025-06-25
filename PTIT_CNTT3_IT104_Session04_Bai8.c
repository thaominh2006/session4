//
// Created by Admin on 25/06/2025.
//

#include <stdio.h>

int main() {
    int n;
    // b1: khai báo biến n
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    // b2: khai báo mảng arr có n phần tử
    for (int i=0; i<n; i++) {
        // b3: sử dụng vòng lặp for để nhập gtri từng phần tử
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        // b4: sử dụng vòng lặp để in ra toàn bộ mảng
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value;
    // b5: khai báo biến value để lưu gtri cần tìm
    printf("Nhap gia tri bat ky: ");
    scanf("%d", &value);

    int check=0; // bien co de ktra co thay khong
    for (int i=0; i<n; i++) {
        // b6: duyệt qua từng ptu của mảng
        if (arr[i]==value) {
            printf("%d, ", i);
            check=1;// danh dau tim thay
        }
    }
    // b6: neu khong tim thay, in thong bao
    if (check==0) {
        printf("Phan tu khong co trong mang");
    }

    return 0;
}
