#include <stdio.h>

int main(void)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(int);
    int temp;

    printf("Before: ");
    for(int j = 0; j < n; j++)
    {
        printf("%d ", array[j]);
    }
    printf("\n");
    
    for(int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    
    printf("After: ");
    for(int j = 0; j < n; j++)
    {
        printf("%d ", array[j]);
    }
    return 0;
}