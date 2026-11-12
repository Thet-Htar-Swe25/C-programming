#include <stdio.h>

char get_option(void);

int main(void)
{
    while(1)
    {
        int input;
        printf("Enter your factorial integer: ");
        scanf("%d", &input);

        int result = 1;

        // while(1)
        // {
        //     result *= input;
        //     input -= 1;

        //     if(input == 1)
        //     {
        //         break;
        //     }
        // }
        
        for(int i = 0; input != 1; i++)
        {
            result *= input;
            input -= 1;
        }
        printf("Result = %d\n", result);

        char option = get_option();
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
    return 0;
}

char get_option(void)
{
    char option;
    printf("Would you like to continue?: ");
    scanf(" %c", &option);
    return option;
}