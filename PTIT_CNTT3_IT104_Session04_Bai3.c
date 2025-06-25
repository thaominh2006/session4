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
        printf("%d ",arr[i]);
    }
    printf("\n");

    // b5: tạo bien min va gan gtri dau tien cua mang
    int min=arr[0];
    int index=0; // chi so dau tien la chi so cua phan tu nho nhat
    for (int i=1; i<n; i++) {
        // b6: su dung vong lap de tim phan tu nho nhat dau tien trong mang
        if (arr[i]<min) {
            min=arr[i];
            index=i;
        }
    }
    // b7: in ra ket qua
    printf("chi so phan tu nho nhat dau tien trong mang: %d\n", index);
    return 0;
}
