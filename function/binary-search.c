#include <stdio.h>

int targetnumber (void)
{
    int target;
    printf("Enter your desire number you want to find: ");
    scanf("%d", &target);

    return target;
}

int binarysearch(int target, int nums[], int len)
{
    //placement
    int left = 0;
    int right = len - 1; // this means right starts from 7th placement of the array
    while(left <= right)
    {
        int mid = (left + right) / 2;
        // int mid = left + (  right - left ) / 2;
        
        if(target == nums[mid])
        {
            return mid;
        }
        else if( target > nums[mid])
        {
            left = mid + 1;
        }
        else //if( target < nums[mid])
        {
            right = mid - 1;
        }
    }
    return -1; 
}



int main(void)
{
    int nums[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(nums) / sizeof(int);

    int target = targetnumber();

    int result = binarysearch(target, nums, length);

    if(result == -1)
    {
        printf("Number isn't here.\n");
    }
    else
    {
        printf("The number is found at the index %d of array.\n", result);
    }

    return 0;
}