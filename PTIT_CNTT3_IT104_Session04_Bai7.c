//
// Created by Admin on 25/06/2025.
//

#include <stdio.h>

int main() {
    // b1: khai báo biến n
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    // b2: khai báo mảng arr có n phần tử
    for (int i = 0; i < n; i++) {
        // b3: sử dụng vòng lặp for để nhập gtri từng phần tử
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        // b4: sử dụng vòng lặp để in ra toàn bộ mảng
        printf("%d ", arr[i]);
    }
    printf("\n");

    int check=0; // biến dùng để ktra xem có tồn tại cặp đối xứng hay không
    // b5: duyet nua dau mang de so sanh voi nua sau
    for (int i=0; i<n/2; i++) {
        // b6: so sanh ptu dau vs ptu doi xung phia cuoi
        if (arr[i]==arr[n-i-1]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n-i-1]);
            check=1; // co it nhat 1 cap doi xung
        }
    }

    // b7: khong co cap doi xung, thong bao
    if (check==0) {
        printf("Khong co phan tu doi xung\n");
    }
    return 0;
}
