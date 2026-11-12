#include <stdio.h>

int min(int nums[], int length);

int main(void)
{
    int minimum;
    int nums[9] = {3, 6, 1, 7, 9, 10, 2, 4, 5};  // be aware - match the numbers you put and the amount of numbers you allowed 
    int length = sizeof(nums) / sizeof(int);

    minimum = min(nums, length);
    printf("The minimum valus is %d", minimum);

    return 0;
}

int min(int nums[], int length)
{
    int min = nums[0];
    for(int i = 1; i < length; i++)
    {
        printf("i = %d, min = %d\n", i, min);
        if(nums[i] < min)
        {
            min = nums[i];
            printf("Min = %d, nums[%d] = %d\n", min, i, nums[i]);
        }
    }
    printf("Min = %d\n", min);
    return min;
}