#include <stdio.h>

void input_nums (int nums[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
}

void mangGiaoDiem (int MangGiaoDiem[], int nums1[], int size1, int nums2[], int size2) {
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (nums1[i] == nums2[j]) {
                count++;
                MangGiaoDiem[count-1] = nums1[i];
            }
        }
    }
    
    if (count == 0) 
        printf("2 mang da nhap khong co phan tu chung !");
    else if (count == 1)
        printf("%d ", MangGiaoDiem[0]);
    else {
        printf("%d ", MangGiaoDiem[0]);
        for (int i = 1; i < count; i++) {
            int temp = 0;
            for (int j = 0; j < i; j++) {
                if (MangGiaoDiem[i] == MangGiaoDiem[j]) {
                    temp++;
                    continue;
                }
                else
                    continue;   
            }
            if (temp == 0)
                printf("%d ", MangGiaoDiem[i]);
        }
    }
}
int main() {
    int size1, size2;
    printf("Nhap so phan tu cua mang thu 1: "); scanf("%d", &size1);
    int nums1[size1];
    input_nums(nums1, size1);
    printf("Nhap so phan tu cua mang thu 2: "); scanf("%d", &size2);
    int nums2[size2];
    input_nums(nums2, size2);
    int MangGiaoDiem[10];
    mangGiaoDiem(MangGiaoDiem, nums1, size1, nums2, size2);
}