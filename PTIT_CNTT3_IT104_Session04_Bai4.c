//
// Created by Admin on 25/06/2025.
//

# include <stdio.h>

int main() {
    int n;
    // b1: khai bao bien n
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    // b2: khai bao mang arr co n phan tu
    for (int i=0; i<n; i++) {
        // b3: su dung vong nhap de nhap gia tri cac phan tu
        printf("phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        // b4: su dung vong lap de in ra gtri cac phan tu
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value;
    // b5: khai bao bien value để lưu giá trị cần tìm
    printf("Nhap gia tri bat ky: ");
    scanf("%d", &value);

    int index=-1;
    // b6: tạo biến index để lưu chỉ số dc tìm thấy, -1 thì ngược lại
    for (int i=n-1; i>=0; i--) {
        // b7: sử dụng vòng lặp for để duyệt qua mảng, tìm ptu cuối cùng có gtri bằng value
        if (arr[i]==value) {
            index=i;
            break;
        }
    }
    // b8: in ra ket qua
    if (index!=-1) {
        printf("%d\n", index);
    }else {
        printf("Khong tim thay phan tu");
    }

    return 0;
}