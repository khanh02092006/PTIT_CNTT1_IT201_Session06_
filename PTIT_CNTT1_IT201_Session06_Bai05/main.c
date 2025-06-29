#include <stdio.h>
int timMax(int arr[], int n, int index, int currentMax) {
    if (index == n) return currentMax;
    if (arr[index] > currentMax)
        currentMax = arr[index];
    return timMax(arr, n, index + 1, currentMax);
}
int timMin(int arr[], int n, int index, int currentMin) {
    if (index == n) return currentMin;
    if (arr[index] < currentMin)
        currentMin = arr[index];
    return timMin(arr, n, index + 1, currentMin);
}
int main(void)
{
    int n;
    int arr[100]; // Giới hạn mảng là 100 phần tử

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int max = timMax(arr, n, 0, arr[0]);
    int min = timMin(arr, n, 0, arr[0]);

    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);
    return 0;
}