#include <stdio.h>

void selectionSort(int arr[], int n) {
    int min_idx, temp;

    // Move boundary of unsorted subarray one by one
    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
        
        // Find the minimum element in unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        for(int k = 0; k < n; k++)
        {
            printf("number %d = placement %d\n", arr[k], k);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {8, 3, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}