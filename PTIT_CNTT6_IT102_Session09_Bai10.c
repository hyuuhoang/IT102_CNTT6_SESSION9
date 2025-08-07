#include <stdio.h>
int main() {
    int arr[8] = {5, 2, 5, 3, 2, 5, 4, 2};
    int n = 8, maxCount = 0;
    int i, j, count;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    printf("Cac phan tu co so lan xuat hien nhieu nhat la: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == maxCount) {
            printf("%d ", arr[i]);
        }
    }
    printf("xuat hien %d lan\n", maxCount);

    return 0;
}