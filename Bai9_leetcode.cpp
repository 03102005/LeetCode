#include <stdio.h>
#include <math.h>

int main() {
    int n, size = 0, count = 0;
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    int temp = n;

    if (n < 0) printf("False !");
    else if (n >= 0 && n <= 9) printf("True !");
    else {
        while (temp > 0) {
            temp/= 10;
            size++;
        }
        int a[size];
        for (int i = 0; i < size; i++) {
            a[i] = n % 10;
            if (n < 10)
                break;
            n /= 10;
        }
        for (int i = 0; i < size/2; i++) {
            if (a[i] == a[size-1-i]) {
                count++;
                continue;
            }
            else {
                count = 0;
                break;
            }   
        }
        if (count == 0) printf("False !");
        else printf("True !");
    }
}