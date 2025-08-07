#include <stdio.h>

int main() {
    int arr[8] = {5, 2, 5, 3, 2, 5, 4, 2};
    int n = 8, maxCount = 0, maxElement = arr[0];
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
            maxElement = arr[i];
        }
    }
    printf("Phan tu co so lan xuat hien nhieu nhat la %d xuat hien %d lan\n", maxElement, maxCount);

    return 0;
}