//
// Created by Admin on 25/06/2025.
//

#include <stdio.h>

int main() {
    int n;
    // b1: khai bao bien n
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    // b2: khai bao mang arr co n phan tu
    for (int i=0; i<n; i++) {
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    // b3: sắp xếp mảng, sủ dụng Bubble Sort(sắp xếp nổi bọt)
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for (int i=0; i<n; i++) {
        // b4: sử dụng vòng lăp để in mảng sau khi sắp xếp
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value;
    // b5: khai báo biến value để lưu gtri cần tìm
    printf("Nhap gia tri bat ky: ");
    scanf("%d", &value);

    int index=-1;
    // b6: tạo biến index, biến giới hạn trái và phải của mảng
    int left=0, right=n-1;
    // b7: sử dụng vòng lặp cho đến khi không còn khoảng để tìm kiếm
    while (left<=right) {
        int mid=(left+right)/2; // tinh chi so giua
        if (arr[mid]==value) {
            index=mid;
            break;
        }else if (arr[mid]<value) {
            left=mid+1; // gtri nam ben phai nen cap nhat bien trai
        }else {
            right=mid-1; // nguoc lai
        }
    }

    // b8: in ket qua
    if (index!=-1) {
        printf("Phan tu co trong mang");
    } else {
        printf("Phan tu khong co trong mang");
    }
    return 0;
}
