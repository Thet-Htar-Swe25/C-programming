#include <stdio.h>

int max(int nums[], int length);

int main(void)
{
    int maximum;
    int nums[10] = {2, 6, 7, 3, 9, 10, 1, 5, 4};
    int length = sizeof(nums) / sizeof(int);
    
    maximum = max(nums, length);
    printf("The maximum value is : %d", maximum);

    return 0;
}

int max(int nums[], int length)
{
    int max = nums[0];
    for(int i = 1; i < length; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}