#include <stdio.h>

int main(void)
{
    int number[100] = {0};
    int count = 0;

    while(1)
    {
        printf("Enter the numbers: ");
        scanf("%d", &number[count]);
        count++;

        char option;
        printf("Would you like to continue(y/n): ");
        scanf(" %c", &option);

        if(option == 'y' || option == 'Y')
        {
            while(getchar() != '\n');
            continue;
        }
        else
        {
            break;
        }
    }
    
    for(int i = 0; i < count; i++)
    {
        printf("%d", number[i]);
    }
    printf("\n");


    int max = number[0];
    int length = sizeof(number) / sizeof(int);
    
    for(int i = 1; i <= length; i++)
    {
        if(number[i] > max)
        {
            max = number[i];
        }
    }
    printf("The max number is %d.\n", max);
    return 0;
}