#include <stdio.h>

void insertionSort(int arr[], int n) 
{
    int key, j;
    for (int i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            //j = j - 1;
            arr[j] = key;   // either way could be done
            j = j - 1;

            for(int k = 0; k < n; k++)
            {
                printf("Number %d = placement %d\n", arr[k], k);
            }
            printf("1st break\n");
        }
        printf("2nd break\n");
        // arr[j + 1] = key; // by doing this while loop doesn't have to do this unnecessary swap
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}