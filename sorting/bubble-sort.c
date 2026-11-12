#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int temp;
    // Outer loop tracks the number of passes
    for (int i = 0; i < n - 1; i++) 
    {
        // Inner loop performs the adjacent comparisons
        for (int j = 0; j < n - i - 1; j++) 
        {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                for(int k = 0; k < n; k++)
                {
                    printf("Number %d = placement %d\n", arr[k], k);
                }
            }
            printf("\n");
        }
        printf("inner loop end\n");
        printf("\n");

    }
}

int main() {
    int arr[] = {6, 3, 2, 1, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}