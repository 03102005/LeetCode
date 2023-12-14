#include <stdio.h>
//Hàm nhập phần tử của mảng
void input_nums (int nums[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
}

void arr_Intersection (int Arr_Intersection[], int nums1[], int size1, int nums2[], int size2) {
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (nums1[i] == nums2[j]) { //Lấy lần lượt từng phần tử của mảng thứ nhất so sánh với các phần tử của mảng thứ 2
                count++;
                Arr_Intersection[count-1] = nums1[i]; //Gán phần tử bằng nhau vào 1 mảng mới
            }
        }
    }
    
    if (count == 0) //Trường hợp 2 mảng không có phần tử chung
        printf("Array intersection has no element !");
    else if (count == 1) // Trường hợp 2 mảng có 1 phần tử chung
        printf("%d ", Arr_Intersection[0]);
    else { //Trường hợp 2 mảng có số phần tử chung lớn hơn 1
        printf("%d ", Arr_Intersection[0]); //Luôn in ra phần tử đầu tiên
        for (int i = 1; i < count; i++) {
            int temp = 0;
            for (int j = 0; j < i; j++) { //Dùng 2 vòng for để so sánh phần tử chuẩn bị in ra với những phần tử đã in
                if (Arr_Intersection[i] == Arr_Intersection[j]) {
                    temp++;
                    continue;
                }
                else
                    continue;   
            }
            if (temp == 0) //Sau khi so sánh, nếu phần tử chuẩn bị in không trùng với những phần tử đã in thì xuất phần tử đó ra màn hình
                printf("%d ", Arr_Intersection[i]);
        }
    }
}
int main() {
    int size1, size2;
    printf("Enter the number of elements in 1st array: "); scanf("%d", &size1);
    int nums1[size1];
    input_nums(nums1, size1);

    printf("Enter the number of elements in 2st array: "); scanf("%d", &size2);
    int nums2[size2];
    input_nums(nums2, size2);
    
    int Arr_Intersection[size1 + size2];
    arr_Intersection(Arr_Intersection, nums1, size1, nums2, size2);
}