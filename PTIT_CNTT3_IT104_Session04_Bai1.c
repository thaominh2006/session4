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
        // b3: su dung vong lap de nhap gtri cho tung phan tu trong mang
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        // b4: su dung vong lap de in tat ca cac phan tu cua mang
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value; // b5: khai bao bien value de luu gia tri can tim
    printf("Nhap mot gia tri bat ky: ");
    scanf("%d", &value);

    int index = -1; // b6: khoi tao chi so index de ktra neu khong tim thay
    for (int i=0; i<n; i++) {
        // b7: duyet qua mang de tim gia tri co phan tu bang value
        if (arr[i] == value) {
            index = i;
            break;
        }
    }

    if (index!=-1) {
        // b8: kiem tra ket qua
        printf("%d\n", index);
    } else {
        printf("Khong tim thay phan tu");
    }
    return 0;
}


