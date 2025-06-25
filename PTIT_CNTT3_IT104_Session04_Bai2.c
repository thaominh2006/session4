//
// Created by Admin on 25/06/2025.
//

#include <stdio.h>

int main() {
    int n;
    // b1: Khai bao bien
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    // b2: Khai bao mang arr co n phan tu
    for (int i=0; i<n; i++) {
        // b3: su dung vong lap de nhap gtri tung phan tu
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        // b4: su dung vong lap de in ra cac phan tu
        printf("%d ", arr[i]);
    }
    printf("\n");

    // b5: tạo bien max va gan gtri dau tien cua mang
    int max=arr[0];
    int index=0;
    // b6: su dung vong lap de tim phan tu lon nhat dau tien trong mang
    for (int i=1; i<n; i++) {
        if (arr[i]>max) {
            max=arr[i];
            index=i;
        }
    }
    // b7: in ra ket qua
    printf("Chi so phan tu lon nhat dau tien trong mang: %d\n", index);


    return 0;
}
