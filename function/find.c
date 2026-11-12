#include <stdio.h>

int nums[10] = {1,2,3,4,5,6,7,8,9,10};

int get_number(void);
void find(int num);

int main(void)
{    
    int number = get_number();

    find(number);

    return 0;
}

int get_number(void)
{
    int num = 0;
    printf("Enter the number you want to find: ");
    scanf("%d", &num);
    return num;
}

void find(int num)
{
    int len = sizeof(nums) / sizeof(int);
    int found = 0;
    int placement = 0;
    printf("num %d\n", num);
    printf("Length %d\n", len);
    for(int i = 0; i < len; i++)
    {
        printf("Number %d = placement %d\n", nums[i], i);
        if(nums[i] == num)  // Beware of the assignment operators (=) and the equality operators (==)
        {
            found = 1;
            placement = i;
            found ? printf("The number %d is found in the index of %d.\n", num, placement) : printf("Number cannot be found.\n") ;

            break;
        }
    }
}