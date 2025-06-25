//
// Created by Admin on 25/06/2025.
//

#include <stdio.h>
#include <string.h>

// b1: khởi tạo cấu trúc Student với 3 thuộc tính id, name, age.
struct Student {
    int id;
    char name[55];
    int age;
};
int main () {
    // b2: khai báo mảng lưu 5 sinh viên
    struct Student students[5];
    // b3: sử dụng vòng lặp để nhập ttin cho từng svien
    for (int i=0; i<5; i++) {
        printf("Nhap thong tin sinh vien so %d:\n", i+1);
        printf("id: ");
        scanf("%d", &students[i].id);
        printf("name: ");
        scanf("%s", &students[i].name);
        printf("age: ");
        scanf("%d", &students[i].age);
    }
    int searchID;
    // b4: khai báo biến để lưu ID cần tìm
    printf("Nhap id sinh vien can tim: ");
    scanf("%d", &searchID);

    int index=-1;
    // b5: khởi tạo chỉ số index
    for (int i=0; i<5; i++) {
        // b6: sử dụng vòng lặp for để duyệt qua từng ptu, tìm kiếm svien theo ID
        if (students[i].id==searchID) {
            index=i; // gán chỉ số i cho biến index
            break;
        }
    }
    // b6: kiểm tra xem có tìm thấy svien hay không và in kết quả
    if (index!=-1) {
        printf("id: %d, name: %s, age: %d\n", students[index].id, students[index].name, students[index].age);
    } else {
        printf("Sinh vien khong ton tai");
    }

    return 0;
}
