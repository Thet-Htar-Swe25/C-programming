#include <stdio.h>

void selectionsorting(int nums[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int min_index = i;

        for(int j = i + 1; j < len; j++)
        {
            if(nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = temp;
    }

    printf("Sorted array:\n");
    for(int k = 0; k < len; k++)
    {
        printf("%d ", nums[k]);
    }
}

int main(void)
{
    int nums[] = {2, 8, 10, 7, 34, 9};
    int length = sizeof(nums) / sizeof(int);

    selectionsorting(nums, length);

    return 0; 
}