#include <stdio.h>

int main (void)
{
    int nums[10] = {10, 6, 2, 7, 9, 1, 8, 4, 3, 5};
    int min = nums[0];
    int length = sizeof(nums) / sizeof(int);

    for(int i = 1; i <= length ; i++)
    {
        if(nums[i] < min)
        {
            min = nums[i];
        }
    }
    printf("Minimun number: %d\n", min);

    return 0 ;
}