#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Nhap các phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ðo thoi gian thuc thi cua Bubble Sort
    clock_t start_bubble = clock();
    bubbleSort(arr, n);
    clock_t end_bubble = clock();
    double time_bubble = (double)(end_bubble - start_bubble) / CLOCKS_PER_SEC;

    // Ðo thoi gian thuc thi cua Selection Sort
    clock_t start_selection = clock();
    selectionSort(arr, n);
    clock_t end_selection = clock();
    double time_selection = (double)(end_selection - start_selection) / CLOCKS_PER_SEC;

    printf("Mang da sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Thoi gian thuc thi cua Bubble Sort: %.6f giây\n", time_bubble);
    printf("Thoi gian thuc thi cua Selection Sort: %.6f giây\n", time_selection);

    free(arr);
    return 0;
}

